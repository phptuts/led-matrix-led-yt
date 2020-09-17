<script>
  import _ from "lodash";
  let port;
  let writer;
  let status = "disconnected";
  let leds = _.range(0, 8).map(() => _.range(0, 8).map(() => false));

  const textEncoder = new TextEncoder();

  function onToggleLed(row, column) {
    leds[row][column] = !leds[row][column];
    leds = [...leds];
  }
  $: arduinoMessage =
    [...leds]
      .reverse()
      .reduce((acc, value) => {
        return acc + value.map((l) => (l ? "1" : "0")).join(":") + ":";
      }, "")
      .slice(0, -1) + "@";

  async function connectUsb() {
    if (!navigator.serial) {
      alert("Turn on experimential web features to connect to the Arduino.");
      return;
    }

    // if it's connected we want to return
    if (status === "connected") {
      return;
    }

    try {
      port = await navigator.serial.requestPort({
        filters: [{ usbVendorId: 0x2341 }],
      });
      await port.open({ baudrate: 115200 });
      writer = port.writable.getWriter();
      status = "connected";
    } catch (e) {
      console.log(e);
    }
  }

  $: if (status == "connected" && arduinoMessage != "") {
    writer.write(textEncoder.encode(arduinoMessage));
  }
</script>

<style>
  main {
    width: 500px;
    height: 500px;
    margin: 10px auto;
    border: solid gray 1px;
    background-color: #535353;
  }
  section.row {
    display: flex;
  }
  div.circle {
    width: 50px;
    height: 50px;
    border-radius: 50%;
    margin: 5px;
    border: solid gray 1px;
    background-color: #fff;
    cursor: pointer;
  }
  div.on {
    background-color: #aa0000;
  }
  h1,
  h2 {
    text-align: center;
  }
  section#message {
    width: 500px;
    word-wrap: break-word;
    border: solid gray 1px;
    padding: 5px;
    margin: 10px auto;
  }
  #usb-connection-info {
    width: 500px;
    margin: 5px auto;
    text-align: center;
  }
  #usb-connection-info h3 {
    letter-spacing: 2px;
  }
  #usb-connection-info button {
    border: none;
    padding: 10px;
    outline: none;
    font-size: 16px;
    cursor: pointer;
  }
  #usb-connection-info button:disabled {
    cursor: no-drop;
  }
  button:active,
  button:focus {
    outline: none;
  }
</style>

<h1>Led Matrix Arduino</h1>

<section id="usb-connection-info">
  <button
    disabled={status === 'connected'}
    on:click={connectUsb}>Connect</button>
  <h3>Status: {status}</h3>
</section>

<main>
  {#each leds as row, rowIndex}
    <section class="row">
      {#each row as led, columnIndex}
        <div
          class:on={led}
          on:click={() => onToggleLed(rowIndex, columnIndex)}
          class="circle" />
      {/each}
    </section>
  {/each}
</main>

<h2>Arduino Message</h2>

<section id="message">{arduinoMessage}</section>
