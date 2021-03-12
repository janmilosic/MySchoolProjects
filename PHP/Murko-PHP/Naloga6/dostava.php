<?php
session_start();

$_SESSION['placilo']= $_POST ['placilo'];

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

    <title>Dostava</title>

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

    .label{
            width:75px;
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

   </style>

</head>

<body>

    <h1>4.korak: Način dostave</h1>

    <table id="tabela">
        <tr>
            <td id="tabela-celice"><i class="fas fa-pencil-alt"></i> Prijava </td>
            <td id="tabela-celice"><i class="far fa-envelope"></i> Naslov </td>
            <td id="tabela-celice"><i class="fas fa-euro-sign"></i> Plačilo </td>
            <td id="tabela-trenutna-celica"><i class="fas fa-truck fa-flip-horizontal"></i> Dostava </td>
            <td id="tabela-celice"><i class="fas fa-check-square"></i> Povzetek </td>
        </tr>
    </table>

    <h3>Izberi način dostave:</h3>

    <div id="form-oblika">
        <form action="povzetek.php" method="post">

            <input type="radio" name="dostava" id="dostava" value="Osebni prevzem"> <span>Osebni prevzem</span> <br>

            <input type="radio" name="dostava" id="dostava" value="Pošta Slovenije"> <span>Pošta Slovenije</span> <br>

            <input type="radio" name="dostava" id="dostava" value="Dostava preko dostavne službe"> <span>Dostava preko dostavne službe</span> <br><br>
        
            <span id="gumb"><input type="submit" value="Nadaljuj na povzetek"></span>

        </form> 
    </div>
    
</body>
</html>