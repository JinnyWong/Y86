<template>
  <div v-for="item in data" :key="item.id">
  <div class="container">
      <br>
  <div class="row">
    <div class="col-6 col-sm-4">
      <div class="card h-100" style="text-align: Left;">
        <div class="card-body">
          <h5 class="card-title"><strong>Stats</strong></h5>
          <table class="table table-responsive">
            <thead>
              <tr>
                  <th scope="col"><br>CT</th>
                  <th scope="col">IC</th>
                  <th scope="col">CPI</th>
  
              </tr>
          </thead>
              <tbody>
                  <tr>
                      <td><br>{{item.CT_Input}}</td>
                      <td><br>{{item.IC_Input}}</td>
                      <td><br>{{item.CPI_Input}}</td>
                  </tr>  
              </tbody>
          </table>
        </div>
      </div>
    </div>
    <div class="col-6 col-sm-4">
      <div class="card" style="text-align: Left; width:150%">
        <div class="card-body">
          <h5 class="card-title"><strong>Registers</strong></h5>
              <table class="table table-responsive">
              <tbody>
                  <tr>
                      <td><h6>%RAX</h6><br>{{item.RAX_Input}}</td>
                      <td><h6>%RCX</h6><br>{{item.RCX_Input}}</td>
                      <td><h6>%RDX</h6><br>{{item.RDX_Input}}</td>
                      <td><h6>%RBX</h6><br>{{item.RBX_Input}}</td>
                      <td><h6>%RSP</h6><br>{{item.RSP_Input}}</td>
                  </tr>   
                  <tr>
                      <td><h6>%RBP</h6><br>{{item.RBP_Input}}</td>
                      <td><h6>%RSI</h6><br>{{item.RSP_Input}}</td>
                      <td><h6>%RDI</h6><br>{{item.RDI_Input}}</td>
                      <td><h6>%R8</h6><br>{{item.R8_Input}}</td>
                      <td><h6>%R9</h6><br>{{item.R9_Input}}</td>
                  </tr> 
                  <tr>
                      <td><h6>%R10</h6><br>{{item.R10_Input}}</td>
                      <td><h6>%R11</h6><br>{{item.R11_Input}}</td>
                      <td><h6>%R12</h6><br>{{item.R12_Input}}</td>
                      <td><h6>%R13</h6><br>{{item.R13_Input}}</td>
                      <td><h6>%R14</h6><br>{{item.R14_Input}}</td>
                  </tr>                                        
              </tbody>
          </table>
        </div>
      </div>
    </div>
      <div class="col-6 col-sm-4 d-flex justify-content-end">
      <div class="card float-right" style="text-align: Left; width:50%">
        <div class="card-body">
          <h5 class="card-title"><strong>CC</strong></h5>
              <table class="table table-responsive">
              <tbody>
                  <tr>
                      <td><h6>CF</h6><br>{{item.CF_Input}}</td>
                  </tr>   
                  <tr>
                      <td><h6>SF</h6><br>{{item.SF_Input}}</td>
                  </tr> 
                  <tr>
                      <td><h6>ZF</h6><br>{{item.ZF_Input}}</td>
                  </tr>                                        
              </tbody>
          </table>
      </div>
      </div>
    </div>        
  </div>
  <div class="row mt-4">
      <div class="col">
          <div class="card p-2" style="text-align: Left;">
              <div class="card-body">
                  <h5 class="card-title"><strong>Stages</strong></h5><br>
                  <table class="table table-responsive">
                      <tr>
                          <th align="center" scope="row"><h1><strong>F</strong></h1></th>
                          <td><h6>PRED_PC</h6><br><p>Input</p></td>
                      </tr>
                      <tr>
                          <th align="center" scope="col"><h1><strong>D</strong></h1></th>
                          <td><h6>STAT</h6><br><p>{{item.D_STAT}}</p></td>
                          <td><h6>I_CODE</h6><br><p>{{item.D_I_CODE}}</p></td>
                          <td><h6>I_FUN</h6><br><p>{{item.D_I_FUN}}</p></td>
                          <td><h6>R_A</h6><br><p>{{item.D_R_A}}</p></td>
                          <td><h6>R_B</h6><br><p>{{item.D_R_B}}</p></td>
                          <td><h6>VAL_C</h6><br><p>{{item.D_VAL_C}}</p></td>
                          <td><h6>VAL_P</h6><br><p>{{item.D_VAL_P}}</p></td>
                      </tr>
                      <tr>
                          <th scope="col"><h1><strong>M</strong></h1></th>
                          <td><h6>STAT</h6><br><p>{{item.M_STAT}}</p></td>
                          <td><h6>I_CODE</h6><br><p>{{item.M_I_CODE}}</p></td>
                          <td><h6>I_FUN</h6><br><p>{{item.M_I_FUN}}</p></td>
                          <td><h6>VAL_C</h6><br><p>{{item.M_VAL_C}}</p></td>
                          <td><h6>VAL_A</h6><br><p>{{item.M_VAL_A}}</p></td>
                          <td><h6>VAL_B</h6><br><p>{{item.M_VAL_B}}</p></td>
                          <td><h6>DST_E</h6><br><p>{{item.M_DST_E}}</p></td>
                          <td><h6>DST_M</h6><br><p>{{item.M_DST_M}}</p></td>
                          <td><h6>SRC_A</h6><br><p>{{item.M_SRC_A}}</p></td>
                          <td><h6>SRC_B</h6><br><p>{{item.M_SRC_B}}</p></td>
                      </tr>
                      <tr>
                          <th scope="col"><h1><strong>E</strong></h1></th>
                          <td><h6>STAT</h6><br><p>{{item.E_STAT}}</p></td>
                          <td><h6>I_CODE</h6><br><p>{{item.E_I_CODE}}</p></td>
                          <td><h6>CND</h6><br><p>{{item.E_CND}}</p></td>
                          <td><h6>VAL_E</h6><br><p>{{item.E_VAL_E}}</p></td>
                          <td><h6>VAL_A</h6><br><p>{{item.E_VAL_A}}</p></td>
                          <td><h6>DST_E</h6><br><p>{{item.E_DST_E}}</p></td>
                          <td><h6>DST_M</h6><br><p>{{item.E_DST_M}}</p></td>
                      </tr>
                      <tr>
                          <th scope="col"><h1><strong>W</strong></h1></th>
                          <td><h6>STAT</h6><br><p>{{item.W_STAT}}</p></td>
                          <td><h6>I_CODE</h6><br><p>{{item.W_I_CODE}}</p></td>
                          <td><h6>VAL_E</h6><br><p>{{item.W_VAL_E}}</p></td>
                          <td><h6>VAL_M</h6><br><p>{{item.W_VAL_M}}</p></td>
                          <td><h6>DST_E</h6><br><p>{{item.W_DST_E}}</p></td>
                          <td><h6>DST_M</h6><br><p>{{item.W_DST_M}}</p></td>
                      </tr>
                  </table>
                  </div>
              </div>
          </div>
      </div>
      <br>
  </div>
  </div>
  </template>
  
<script>
import jsonData from './jsonData.json'
export default{
    data(){
        return{
            data: jsonData 
        }
    }
}
    /*export default {
    name: 'data',
    data() {
    return {
      DataList: []
    };
    },
    methods: {
    getWeatherData() {
      fetch("C:\Users\balala\vue_pj\data.json")
        .then(response => response.json())
        .then(data => (this.DataList = data));
    }
    }
};*/

</script>



  <style>
  hr{
      margin-top: -1rem;
      margin-bottom: 1.4rem;
      border: 0;
      border-top: 1px solid rgba(0, 0, 0, 0);
  }
  
  h6{
      color: #434242;
      margin-bottom: -1.15rem;
  }
  
  
  card{
      display:flex;
  }
  
  table td:hover{
      background-color: #EEEEEE;
  }
  
  th {
   border-style : hidden!important;
  }
  
  .container-fluid-w1000 {
    max-width: 1000px;
  }
  
  </style>
  