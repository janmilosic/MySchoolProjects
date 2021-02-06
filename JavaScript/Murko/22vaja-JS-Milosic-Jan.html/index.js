
console.log(test);

var rezultat = document.getElementById('rezultat');
     
    function izpis(btn) {
         
        var pritiskBtn = btn.innerHTML;
         
        if (pritiskBtn == '=') {

            // Izrafun
            rezultat.innerHTML = eval(rezultat.innerHTML);
             
        } else if (pritiskBtn == 'C') {

            // Izbris vsega (pocisti)
            rezultat.innerHTML = '0';
             
        } else {
            if (rezultat.innerHTML == '0') {
                rezultat.innerHTML = pritiskBtn;
                 
            } else {
                rezultat.innerHTML += pritiskBtn;   
            }
        }
    }