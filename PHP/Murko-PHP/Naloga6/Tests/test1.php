<?php
session_start();
$_SESSION["a1"] = "test";
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Document</title>
</head>
<body>

<form action="test2.php" method="post">

Ime: <input type="text" name="ime" id="ime">
Priimek: <input type="text" name="priimek" id="priimek">

<input type="submit" value="Naprej">


</form>

</body>
</html>