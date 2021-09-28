<?php
session_start();
$_SESSION['ime'] = $_POST['ime'];
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

<form action="test3.php" method="post">

Naslov: <input type="text" name="naslov" id="naslov">
Pošta: <input type="text" name="posta" id="posta">

<input type="submit" value="Naprej">


</form>

</body>
</html>