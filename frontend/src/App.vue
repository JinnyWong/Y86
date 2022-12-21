<template>
<div class="overflow-scroll">
<div
  class="bg-image overflow-scroll"
  style="
    background-image: url('https://images.unsplash.com/photo-1530177150700-84cd9a3b059b?ixlib=rb-4.0.3&ixid=MnwxMjA3fDB8MHxwaG90by1wYWdlfHx8fGVufDB8fHx8&auto=format&fit=crop&w=987&q=80');
    background-attachment: fixed;
    height: 100vh;
  "
>
   <Header></Header>
    <div class="container">
      <div class="row mt-5">
        <Card></Card>
      </div>
    </div>
    <Footer></Footer>
</div>
</div>
</template>

<script>


//importing bootstrap 5 Modules
import "bootstrap/dist/css/bootstrap.min.css";
import "bootstrap/dist/js/bootstrap.min.js";
import Header from './components/MyHeader'
import Card from './components/MyCard'
export default {
  
components: {
    Header,
    Card,
  }
}
</script>

<style>
#app {
  font-family: Avenir, Helvetica, Arial, sans-serif;
  -webkit-font-smoothing: antialiased;
  -moz-osx-font-smoothing: grayscale;
  text-align: center;
  color: #2c3e50;
  margin-top: 0px;
}

</style>
