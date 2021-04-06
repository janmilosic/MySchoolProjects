
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

    input[type=submit]{
        padding:12px;
        border: none;
        color:white;
        background-color:#4f63a1;
        border-radius: 2px;
    }

    #gumb{
        margin-left: 4%;
    }

</style>

</head>

<body>

    <h1>Prijava uporabnika s pomočjo piškotkov</h1>

    <p class="debelina">Za prijavo uporabljamo piškotke.</p>
    <p>Prijava omogoča, da se piškotki zapomnijo uporabniško ime in geslo za obdobje 1 leto. Če potrditveno polje ni potrjeno, veljavnost poškotkov poteče ob zaprtju brskalnika.</p>

    <form action="22vaja-obrazec-PHP-Milosic-Jan.php" method="post">
        <input type="submit" value="Pojdi na prijavo" id="gumb">
    </form>

</body>
</html>