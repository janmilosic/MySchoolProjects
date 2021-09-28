  
<?php
session_start();
?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Vaja 22</title>
    <style>
    h1{
        color:#4f63a1;
    }
    button{
             margin-top:30px;
             margin-left:50px;
             height:35px;
             width:170px;
             background-color:#4f63a1;
             color:white;
    }
    .gumb1{
             margin-top:10px;
             margin-left:50px;
             height:35px;
             width:100px;
             background-color:#4f63a1;
             color:white;

    }

    </style>
</head>
<body>
<h1>Prijava uporabnika</h1>
<p>Dostop do strani je omogočen le prijavljenim uporabnikom!</p><br>
<p>Pozdravljen: <b><?php  echo $_COOKIE['uporabnisko'];?></b></p>
<p>Trenutne vrednosti piškotov:</p>
<p>Uporabnisko ime: <?php echo $_COOKIE['uporabnisko'] ?></p>
<p>Geslo: <?php echo $_COOKIE['geslo']?></p>
<button class="gumb1"><a href="22vaja-odjava-brez-piskotkov-PHP-Milosic-Jan.php" style ="text-decoration:none; color:white;">Odjava</button><br><br>
<button><a href="22vaja-brisi-PHP-Milosic-Jan.php" style="text-decoration:none;color:white;">Odjava z brisanjem piškotkov!</button>
</body>
</html>