<?php
session_start();

$_SESSION['ime'] = $_POST['ime'];
$_SESSION['priimek'] = $_POST['priimek'];
$_SESSION['email'] = $_POST['email'];

?>

<!DOCTYPE html>
<html lang="en">
<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">

    <script src="https://kit.fontawesome.com/910fa2908a.js" crossorigin="anonymous"></script>
    <link rel="preconnect" href="https://fonts.gstatic.com">
    <link href="https://fonts.googleapis.com/css2?family=Roboto&display=swap" rel="stylesheet">

    <title>Naslov</title>

   <style>
    
    *{
        font-family:'Roboto', sans-serif;
    }

    h1{
        color:#4f63a1;
    }

    h3{
        color:#b5c0dd;
    }

    input[type=text]{
        padding: 3px;
        background-color: #e6e9fc;
        border-radius:2px;
    }

    input[type=email]{
        padding: 3px;
        background-color: #e6e9fc;
        border-radius: 2px;
        width: 210px;
    }

    input[type=submit]{
        padding:12px;
        border: none;
        color:white;
        background-color:#4f63a1;
        border-radius: 2px;
    }

    label{
            width:130px;  
            display:inline-block;
            text-align: right;
            margin-top: 7px;
    }

    #tabela{
        border-collapse:collapse;
        background-color:rgb(63, 73, 116);
        width:550px;
        height:28px;
        text-align: center;
    }

    #tabela-celice{
        background-color:#d3d8e9;
        color:#5b5b5b;
    }

    #tabela-trenutna-celica{
        background-color: #4f63a1;
        color:white;
    }
    
    #gumb{
        margin-left: 6.8%;
    }

   </style>

</head>

<body>

    <h1>2.korak: Naslov za dostavo</h1>

    <table id="tabela">
        <tr>
            <td id="tabela-celice"><i class="fas fa-pencil-alt"></i> Prijava </td>
            <td id="tabela-trenutna-celica"><i class="far fa-envelope"></i> Naslov </td>
            <td id="tabela-celice"><i class="fas fa-euro-sign"></i> Plačilo </td>
            <td id="tabela-celice"><i class="fas fa-truck fa-flip-horizontal"></i> Dostava </td>
            <td id="tabela-celice"><i class="fas fa-check-square"></i> Povzetek </td>
        </tr>
    </table>

    <h3>Vnesi naslov za dostavo:</h3>

    <div id="form-oblika">
        <form action="placilo.php" method="post">
            <label for="naslov">Naslov: </label><input type="text" id="naslov" name="naslov"><br>
            <label for="mesto">Mesto: </label><input type="text" id="mesto" name="mesto"><br>
            <label for="postnast">Poštna številka: </label><input type="text" id="postnast" name="postnast"><br>
            <label for="posta">Pošta: </label><input type="text" name="posta" id="posta"><br><br>
            <span id="gumb"><input type="submit" value="Nadaljuj na plačilo"></span>
        </form> 
    </div>
    
</body>
</html>