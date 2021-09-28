  
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
    <style>
    h1{
        color:#4f63a1;
    }
    button{
             margin-top:10px;
             margin-left:50px;
             height:35px;
             width:120px;
             background-color:#4f63a1;
             color:white;
    }
    </style>
</head>
<body>
    <h1>Prijava uporabnika</h1>
    <p>Trenutne vrednosti piškotov</p>
    <p>Uporabnisko ime: <?php echo $_COOKIE['uporabnisko']?></p>
    <p>Geslo: <?php echo $_COOKIE['geslo'] ?></p>
    <button><a href="22vaja-prijava-PHP-Milosic-Jan.php" style="text-decoration:none;color:white;">Pojdi na prijavo</button>
</body>
</html>