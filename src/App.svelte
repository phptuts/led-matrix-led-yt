<script>
  import _ from "lodash";

  let leds = _.range(0, 8).map(() => _.range(0, 8).map(() => false));
  console.log(leds);

  function onToggleLed(row, column) {
    leds[row][column] = !leds[row][column];
    leds = [...leds];
  }
  $: arduinoMessage =
    leds
      .reduce((acc, value) => {
        return acc + value.map((l) => (l ? "1" : "0")).join(":") + ":";
      }, "")
      .slice(0, -1) + "@";
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
</style>

<h1>Led Matrix Arduino</h1>

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
