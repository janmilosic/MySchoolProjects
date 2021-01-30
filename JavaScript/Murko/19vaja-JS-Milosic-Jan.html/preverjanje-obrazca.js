
/* Preverjanje ali je podatek vpisan ali ne */

//ustvarimo novo funkcijo z imenom preveri in parametrom obrazec
function preveri(obrazec)
{  
   //ime (minimalno 3je znaki)
   if (obrazec.ime.value == "" || obrazec.ime.value.length < 3) {
      document.getElementById("ime").style.backgroundColor = "#e9967a";
      document.getElementById("ime").focus(); 
      alert("Vpišite ime ki ima vsaj 3 črke!");
      return false; 
   }

   //priimek (minimalno 3 znaki)
   if (obrazec.priimek.value == "" || obrazec.priimek.value.length < 3) {
      document.getElementById("priimek").style.backgroundColor = "#e9967a";
      document.getElementById("priimek").focus(); 
      alert("Vpišite priimek ki ima vsaj 3 črke!");
      return false;
   }

   //ulica (minimalno 5 znakov)
   if (obrazec.ulica.value == "" || obrazec.ulica.value.length < 5) {
      document.getElementById("ulica").style.backgroundColor = "#e9967a";
      document.getElementById("ulica").focus(); 
      alert("Vpišite ulico ki ima vsaj 5 črk!");
      return false;
   }

   //kraj (minimalno 2 znaka)
   if (obrazec.kraj.value == "" || obrazec.kraj.value.length < 2) {
      document.getElementById("kraj").style.backgroundColor = "#e9967a";
      document.getElementById("kraj").focus(); 
      alert("Vpišite kraj!");
      return false;
   }

   //postna stevilka (ne sme biti manjša od 4 znakov in nezme biti prazno)
   if (obrazec.posta.value == "" || obrazec.posta.value.length < 4) {
      document.getElementById("posta").style.backgroundColor = "#e9967a";
      document.getElementById("posta").focus(); 
      alert("Vpišite poštno številko!");
      return false;
   }

   //z let deklariramo spremenljivko st, isNaN = is not a number (nujno morajo biti stevilke )
   let st = obrazec.posta.value;
   if (isNaN(st)){
      document.getElementById("posta").style.backgroundColor = "#e9967a";
      document.getElementById("posta").focus(); 
      alert("Poštna številka lahko vsebuje samo številke");
      return false;
   } 

   // (preveri da so tocno 4 stevilke )
   if (st.toString().length !=4){
      document.getElementById("posta").style.backgroundColor = "#e9967a";
      document.getElementById("posta").focus(); 
      alert("Poštna številka je 4 mestna npr. 2000");
      return false;
   } 
  
   //spol (preveri če je izbra kateri odgovor) izbrana je lahko samo ena moznost
   if (obrazec.spol.selectedIndex <= 0) {
      document.getElementById("spol").style.backgroundColor = "#e9967a";
      document.getElementById("spol").focus(); 
      alert("Izberite spol!");
      return false;
   }

   //dan rojstva (preveri če je izbra kateri odgovor) izbrana je lahko samo ena moznost
   if (obrazec.dan.selectedIndex <= 0) {
      document.getElementById("dan").style.backgroundColor = "#e9967a";
      document.getElementById("dan").focus(); 
      alert("Izberite vaš dan rojstva!");
      return false;
   }

   //mesec rojstva (preveri če je izbra kateri odgovor) izbrana je lahko samo ena moznost
   if (obrazec.mesec.selectedIndex <= 0) {
      document.getElementById("mesec").style.backgroundColor = "#e9967a";
      document.getElementById("mesec").focus(); 
      alert("Izberite vaš mesec rojstva!");
      return false;
   }

   //leto rojstva (preveri da je sttevilo med 1900 in 2021)
   if(obrazec.letnica.value < 1900 || obrazec.letnica.value > 2021 ) {
      document.getElementById("letnica").style.backgroundColor = "#e9967a";
      document.getElementById("letnica").focus(); 
      alert("Vpišite vašo letnico rojstva med 1900 in 2021");
      return false;
   }

   //preveri da letnica rojstva vsebuje samo številke 
   st = obrazec.letnica.value;
    if (isNaN(st)){
       document.getElementById("posta").style.backgroundColor = "#e9967a";
       document.getElementById("posta").focus(); 
       alert("Letnica rojstva lahko vsebuje samo številke");
       return false;
    } 
 
    //preveri število številk in javi če jih je več kot 4
    if (st.toString().length !=4){
       document.getElementById("posta").style.backgroundColor = "#e9967a";
       document.getElementById("posta").focus(); 
       alert("Stevilo je lahko samo 4 mestno");
       return false;
    } 

   //GSM (uporabimo lahko vse številke od 1-9,)
   if (obrazec.gsm.value == "" || obrazec.gsm.value.length < 9) {
      document.getElementById("gsm").style.backgroundColor = "#e9967a";
      document.getElementById("gsm").focus(); 
      alert("Vpišite vašo telefonsko številk! (9 številk) npr. 041 123 123");
      return false;
   }

   // vsebuje lahko strktno samo številke 
    st = obrazec.gsm.value;
    if (isNaN(st)){
       document.getElementById("posta").style.backgroundColor = "#e9967a";
       document.getElementById("posta").focus(); 
       alert("Telefonska številka lahko vsebuje samo številke");
       return false;
    } 

    //število številk je omejeno na 9 
    if (st.toString().length !=9){
       document.getElementById("posta").style.backgroundColor = "#e9967a";
       document.getElementById("posta").focus(); 
       alert("Stevilo ni 9 mestno");
       return false;
    } 

   //E-mail
   //!odsprede ker zanikamo to, torej ce NI @ naredi to pa to
   if (!obrazec.mail.value.includes("@") || !obrazec.mail.value.includes("."))  {
      document.getElementById("mail").style.backgroundColor = "#e9967a";
      document.getElementById("mail").focus(); 
      alert("Vpišite pravilen E-mail! npr. ime@ime.domena");
      return false;
   }

   //krožki (preveri če je izbran kateri krožek)
   if (obrazec.krozki.selectedIndex < 0) {
      document.getElementById("mail").style.backgroundColor = "#e9967a";
      document.getElementById("mail").focus(); 
      alert("Izberite krožek!");
      return false;
   }

   //checkbox - izberi programske jezike 
   //(ustvari novo spremenljivko z začetno vrednostjo 0  in preveri če je polje označeno ali ne)
   var stevilo = 0
   for (i = 0; i < obrazec.jeziki.length; ++i) {
      if (obrazec.jeziki[i].checked) ++stevilo
   }

   //označem mora biti vsaj en checkbox
   if (stevilo == 0) {
      document.getElementById("mail").style.backgroundColor = "#e9967a";
      document.getElementById("mail").focus(); 
      alert("Izberite jezike ki jih znate!");
      return false;

   }

   //označeni so lahko največ 3-je checkbox-i 
   if (stevilo > 3) {
      document.getElementById("mail").style.backgroundColor = "#e9967a";
      document.getElementById("mail").focus(); 
      alert("Izberete lahko samo 3 opcije");
      return false;
   }
   
   //označi svoje znanje 
   //nova spremenljivka i z osnovno vrednostjo 0 in preveri ečee je katera možnost označena ali ne 
   var i = 0
   while (i < obrazec.ocena.length && !obrazec.ocena[i].checked) ++i;
   if (i == obrazec.ocena.length) {
      document.getElementById("mail").style.backgroundColor = "#e9967a";
      document.getElementById("mail").focus(); 
      alert("Ocenite vaše znanje C#!");
      return false;
   }

   return true;

}