<?php
session_start();
$_SESSION['test']= $_POST ['credit_card'];
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
    <div>  <?php echo $_SESSION['test']; ?> </div>
</body>
</html>