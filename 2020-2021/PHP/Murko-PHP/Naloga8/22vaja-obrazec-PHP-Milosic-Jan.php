
<?php
session_start();
?>

<?php

    $user = 'janmilosic';
    $pass = 'geslo';

    if (isset($_POST['uporabnisko']) && isset($_POST['geslo'])) {
    
        if (($_POST['uporabnisko'] == $user) && ($_POST['geslo'] == $pass)) {    
        
            if (isset($_POST['zapomni'])) {
                setcookie('uporabnisko', $_POST['uporabnisko'], time()+60*60*24*365);
                setcookie('geslo', ($_POST['geslo']), time()+60*60*24*365);
            }else{
                setcookie('uporabnisko', $_POST['uporabnisko']);
                setcookie('geslo', $_POST['geslo']);
            }
           header("Location: 22vaja-prijava-PHP-Milosic-Jan.php");
        }else{
            header("Location: 22vaja-obrazec-nepravilni-PHP-Milosic-Jan.php");
        }
    }  

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
        width: 7%;
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

<form action="22vaja-prijava-PHP-Milosic-Jan.php"  method="post">

    <label for="username">Uporabniško ime:</label><input type="username" id="username" name="username"><br>
    <label for="password">Geslo: </label><input type="password" name="password" id="password"><br>
    <label for="checkbox">Zapomni si me: </label><input type="checkbox" id="checkbox" name="checkbox"><br><br>

    <input type="submit" value="Prijava" id="gumb">     

</form> 

</body>
</html>
