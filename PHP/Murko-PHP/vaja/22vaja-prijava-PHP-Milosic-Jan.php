  
<?php
session_start();
?>

<!DOCTYPE html>
<html>
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <title>Vaja 22</title>
    <style>
    .obrazec{
        background-color:lavender;
        border-color:lavender;
        margin-top:5px;
        width:100px;
    }
    h1{
        color:#4f63a1;
    }
    button{
        width:70px;
        height:30px;
        margin-top:30px;
        margin-left:120px;  
        background-color:#4f63a1;
        color:white;

         }
         .geslo{
             margin-left:77px;
         }
         .pomni{
           margin-left:17px;  
           margin-top:10px;
         }
         .submit{
             margin-top:30px;
             margin-left:120px;
             height:30px;
             width:80px;
             background-color:#4f63a1;
             color:white;
         }
    </style>
</head>
<body>
    <h1>Prijava uporabnika</h1>
    <div></div>
    <form action="22vaja-prijava-PHP-Milosic-Jan.php" method="POST">
    Uporabniško ime: <input class="obrazec" type="text" name="uporabnisko"><br>
    <div class="geslo">Geslo:<input class="obrazec" type="password" name="geslo"><br></div>
    <div class="pomni">Zapomni si me: <input type="checkbox" name="zapomni"><br></div>
    <input class="submit" type="submit" value="Prijava">
    </form>
    </div>
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
           header("Location: 22vaja-main-PHP-Milosic-Jan.php");
        }else{
            header("Location: 22vaja-obrazec-nepravilni-PHP-Milosic-Jan.php");
        }
    }   
    ?>
</body>
</html>