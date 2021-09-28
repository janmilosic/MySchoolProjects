<?php
session_start();

$_SESSION['dostava']= $_POST ['dostava'];

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

    <title>Povzetek</title>

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
            width:125px;
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
        margin-left: 4%;
    }

    .barva{color:#4f63a1; font-weight: bold;}

   </style>

</head>

<body>

    <h1>5.korak: Povzetek naročila</h1>

    <table id="tabela">
        <tr>
            <td id="tabela-celice"><i class="fas fa-pencil-alt"></i> Prijava </td>
            <td id="tabela-celice"><i class="far fa-envelope"></i> Naslov </td>
            <td id="tabela-celice"><i class="fas fa-euro-sign"></i> Plačilo </td>
            <td id="tabela-celice"><i class="fas fa-truck fa-flip-horizontal"></i> Dostava </td>
            <td id="tabela-trenutna-celica"><i class="fas fa-check-square"></i> Povzetek </td>
        </tr>
    </table>

    <h3>1.korak: Prijava</h3>

     <label for="ime">Ime:</label> <span class="barva"><?php echo $_SESSION['ime']; ?></span> <br>
     <label for="priimek">Priimek:</label><span class="barva"><?php echo $_SESSION['priimek']; ?></span> <br>
     <label for="email">E-mail:</label><span class="barva"><?php echo $_SESSION['email']; ?></span> <br>

     <h3>2.korak: Naslov za dostavo</h3>

    <label for="naslov">Naslov:</label> <span class="barva"><?php echo $_SESSION['naslov']; ?></span> <br>
    <label for="mesto">Mesto:</label> <span class="barva"><?php echo $_SESSION['mesto']; ?></span> <br>
    <label for="postnast">Poštna številka:</label> <span class="barva"><?php echo $_SESSION['postnast']; ?></span> <br>
    <label for="posta">Pošta:</label> <span class="barva"><?php echo $_SESSION['posta']; ?></span> <br> 

    <h3>3.korak: Način plačila</h3>

    <label for="nacinplacila">Način plačila:</label> <span class="barva"><?php echo $_SESSION['placilo']; ?></span>

    <h3>4.korak: Dostava</h3>

    <label for="dostava">Način dostave:</label> <span class="barva"><?php echo $_SESSION['dostava']; ?></span>


</body>
</html>