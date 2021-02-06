
var btn = document.getElementById('izpisi');
var st = document.getElementById('st');

function izpis(){

   let stevilo = st.value;

   if (stevilo == "" || stevilo < 1 || stevilo > 10 ) {
      return alert("Vpisati morate število med 1 in 10");
    }

   if (isNaN(stevilo)){
      return alert("Vpišete lahko samo številke");
   } 

   for (let i = 1; i <= stevilo; i++)
      narediSuperDuperStvar(i);

}

function narediSuperDuperStvar(i) {

   var noviP = document.createElement("P");
   document.body.appendChild(noviP);
   var node = document.createTextNode( i + ". Jan");
   noviP.appendChild(node);
}
