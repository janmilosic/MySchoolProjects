
var besedilo = document.getElementById('vneseno-besedilo');
var izpis = document.getElementById('praznopolje');
var obrni = document.getElementById('spremeni');

obrni.onclick = function() {
var novoBesedilo = besedilo.value.split('');
var razdeljenoBesedilo = novoBesedilo.reverse();
var obrnjenoBesedilo = razdeljenoBesedilo.join('');
izpis.innerText = obrnjenoBesedilo
}