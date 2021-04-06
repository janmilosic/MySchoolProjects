
<?php
session_start();
?>

<!DOCTYPE html>
<html>
<head>

    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">

    <link rel="preconnect" href="https://fonts.gstatic.com">
    <link href="https://fonts.googleapis.com/css2?family=Roboto&display=swap" rel="stylesheet">

<style>

    *{
        font-family:'Roboto', sans-serif;
    }

    h1 {
        color:#4f63a1;
    }

    .debelina{
        font-weight:bold;
    }

    .seznam{
        text-decoration: none;
    }

    input[type=submit]{
        padding:12px;
        border: none;
        color:white;
        background-color:#4f63a1;
        border-radius: 2px;
    }

    input[type=username]{
        padding: 3px;
        background-color: #e6e9fc;
        border-radius: 2px;
        width: 210px;
    }

    input[type=password]{
        padding: 3px;
        background-color: #e6e9fc;
        border-radius: 2px;
        width: 210px;
    }

    label{
        width:30%;
        display:inline-block;
        text-align: right;
        margin-top: 7px;
    }

    #gumb{
        margin-left: 4%;
    }

</style>

</head>
<body>

<h1>Prijava uporabnika</h1>

<p>Dostop do strani je omogočen le prijavljenim uporabnikom!</p>

<p>Pozdravljen <span class="debelina"> <?php  echo $_COOKIE['uporabnisko'];?> </span></p>

<div>Trenutne vrednosti piškotkov:</div>
<div>uime: <span> <?php  echo $_COOKIE['uporabnisko'];?> </span></div>    
<div>geslo: <span> <?php echo $_COOKIE['geslo']?> </span></div><br>

<form action="22vaja-odjava-PHP-Milosic-Jan.php" method="post">
    <input type="submit" value="Odjava" id="gumb"><br><br>
</form>

<form action="22vaja-brisi-PHP-Milosic-Jan.php" method="post">
    <input type="submit" value="Odjava z brisanjem piškotkov" id="gumb">
</form>

</body>
</html>
