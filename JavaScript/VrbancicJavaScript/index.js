
function izracun()
{
    var stevilo1 = parseFloat(document.getElementById('stevilo1').value);
    var stevilo2 = parseFloat(document.getElementById('stevilo2').value);
                
    var operator = document.getElementById('operatorji').value;
                
    if(operator === '+')
    {
        document.getElementById('rezultat').value = stevilo1+stevilo2;
        document.getElementById("izpis").innerHTML = "Zdaj ste seštevali"
    }
                
    if(operator === '-')
    {
        document.getElementById('rezultat').value = stevilo1-stevilo2;
        document.getElementById("izpis").innerHTML = "Zdaj ste odštevali"
    }
                
    if(operator === '/')
    {
        document.getElementById('rezultat').value = stevilo1/stevilo2;
        document.getElementById("izpis").innerHTML = "Zdaj ste delili"
    }
                
    if(operator === 'X')
    {
        document.getElementById('rezultat').value = stevilo1*stevilo2;
        document.getElementById("izpis").innerHTML = "Zdaj ste množili"
    }
}