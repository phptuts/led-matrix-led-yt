<script>
  function onToggleLed(row, col) {}
</script>

<style>
  h1 {
    text-align: center;
  }
  main {
    width: 500px;
    height: 560px;
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
    background-color: #fff;
    border: solid gray 1px;
    margin: 5px;
    cursor: pointer;
  }
</style>

<h1>Led Matrix</h1>

<main>
  <section class="row">
    <div on:click={() => onToggleLed(0, 0)} class="circle" />
    <div on:click={() => onToggleLed(0, 1)} class="circle" />
    <div on:click={() => onToggleLed(0, 2)} class="circle" />
    <div on:click={() => onToggleLed(0, 3)} class="circle" />
    <div on:click={() => onToggleLed(0, 4)} class="circle" />
    <div on:click={() => onToggleLed(0, 5)} class="circle" />
    <div on:click={() => onToggleLed(0, 6)} class="circle" />
    <div on:click={() => onToggleLed(0, 7)} class="circle" />
  </section>
  <section class="row">
    <div on:click={() => onToggleLed(1, 0)} class="circle" />
    <div on:click={() => onToggleLed(1, 1)} class="circle" />
    <div on:click={() => onToggleLed(1, 2)} class="circle" />
    <div on:click={() => onToggleLed(1, 3)} class="circle" />
    <div on:click={() => onToggleLed(1, 4)} class="circle" />
    <div on:click={() => onToggleLed(1, 5)} class="circle" />
    <div on:click={() => onToggleLed(1, 6)} class="circle" />
    <div on:click={() => onToggleLed(1, 7)} class="circle" />
  </section>
  <section class="row">
    <div on:click={() => onToggleLed(2, 0)} class="circle" />
    <div on:click={() => onToggleLed(2, 1)} class="circle" />
    <div on:click={() => onToggleLed(2, 2)} class="circle" />
    <div on:click={() => onToggleLed(2, 3)} class="circle" />
    <div on:click={() => onToggleLed(2, 4)} class="circle" />
    <div on:click={() => onToggleLed(2, 5)} class="circle" />
    <div on:click={() => onToggleLed(2, 6)} class="circle" />
    <div on:click={() => onToggleLed(2, 7)} class="circle" />
  </section>
  <section class="row">
    <div on:click={() => onToggleLed(3, 0)} class="circle" />
    <div on:click={() => onToggleLed(3, 1)} class="circle" />
    <div on:click={() => onToggleLed(3, 2)} class="circle" />
    <div on:click={() => onToggleLed(3, 3)} class="circle" />
    <div on:click={() => onToggleLed(3, 4)} class="circle" />
    <div on:click={() => onToggleLed(3, 5)} class="circle" />
    <div on:click={() => onToggleLed(3, 6)} class="circle" />
    <div on:click={() => onToggleLed(3, 7)} class="circle" />
  </section>
  <section class="row">
    <div on:click={() => onToggleLed(4, 0)} class="circle" />
    <div on:click={() => onToggleLed(4, 1)} class="circle" />
    <div on:click={() => onToggleLed(4, 2)} class="circle" />
    <div on:click={() => onToggleLed(4, 3)} class="circle" />
    <div on:click={() => onToggleLed(4, 4)} class="circle" />
    <div on:click={() => onToggleLed(4, 5)} class="circle" />
    <div on:click={() => onToggleLed(4, 6)} class="circle" />
    <div on:click={() => onToggleLed(4, 7)} class="circle" />
  </section>
  <section class="row">
    <div on:click={() => onToggleLed(5, 0)} class="circle" />
    <div on:click={() => onToggleLed(5, 1)} class="circle" />
    <div on:click={() => onToggleLed(5, 2)} class="circle" />
    <div on:click={() => onToggleLed(5, 3)} class="circle" />
    <div on:click={() => onToggleLed(5, 4)} class="circle" />
    <div on:click={() => onToggleLed(5, 5)} class="circle" />
    <div on:click={() => onToggleLed(5, 6)} class="circle" />
    <div on:click={() => onToggleLed(5, 7)} class="circle" />
  </section>
  <section class="row">
    <div on:click={() => onToggleLed(6, 0)} class="circle" />
    <div on:click={() => onToggleLed(6, 1)} class="circle" />
    <div on:click={() => onToggleLed(6, 2)} class="circle" />
    <div on:click={() => onToggleLed(6, 3)} class="circle" />
    <div on:click={() => onToggleLed(6, 4)} class="circle" />
    <div on:click={() => onToggleLed(6, 5)} class="circle" />
    <div on:click={() => onToggleLed(6, 6)} class="circle" />
    <div on:click={() => onToggleLed(6, 7)} class="circle" />
  </section>
  <section class="row">
    <div on:click={() => onToggleLed(5, 0)} class="circle" />
    <div on:click={() => onToggleLed(5, 1)} class="circle" />
    <div on:click={() => onToggleLed(5, 2)} class="circle" />
    <div on:click={() => onToggleLed(5, 3)} class="circle" />
    <div on:click={() => onToggleLed(5, 4)} class="circle" />
    <div on:click={() => onToggleLed(5, 5)} class="circle" />
    <div on:click={() => onToggleLed(5, 6)} class="circle" />
    <div on:click={() => onToggleLed(5, 7)} class="circle" />
  </section>
  <section class="row">
    <div on:click={() => onToggleLed(7, 0)} class="circle" />
    <div on:click={() => onToggleLed(7, 1)} class="circle" />
    <div on:click={() => onToggleLed(7, 2)} class="circle" />
    <div on:click={() => onToggleLed(7, 3)} class="circle" />
    <div on:click={() => onToggleLed(7, 4)} class="circle" />
    <div on:click={() => onToggleLed(7, 5)} class="circle" />
    <div on:click={() => onToggleLed(7, 6)} class="circle" />
    <div on:click={() => onToggleLed(7, 7)} class="circle" />
  </section>
</main>
