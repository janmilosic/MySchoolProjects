<html>
<head>
<meta charset="UTF-8">
<title> Obdelaj - Jan</title>
</head>
<body>
<?php
   $kolicina = $_POST['kolicina'];
   $izbor = $_POST['izbor'];

   echo "Naročili ste: ". $kolicina . " × " . $izbor . ".<br />";
   echo "Zahvaljujemo se vam za naročilo!";
?>
</body>
</html>