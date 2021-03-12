<?php
session_start();
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
    
<form action="radio-test2.php" method="post">
<input type="radio" name="credit_card" value="MasterCard" checked="checked">MasterCard<br>
<input type="radio" name="credit_card" value="Visa">Visa<br>
<input type="radio" name="credit_card" value="American Express">American Express<br>
<input type="submit" name="button" value="Submit"/></form>


</body>
</html>