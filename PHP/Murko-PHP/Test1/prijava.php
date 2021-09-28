<?php
include_once 'funkcije.php';
?>
<!DOCTYPE html>
<html>

<head>
    <meta charset="UTF-8">
    <meta http-equiv="X-UA-Compatible" content="IE=edge">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <link rel="stylesheet" href="oblikovanje.css">
    <title>Prijava</title>
    
</head>

<body>
    <h1>Prijava</h1>
    <form action="<?php echo $_SERVER['PHP_SELF']; ?>" method="post">
        <table>
            <tr>
                <td>Uporabniško ime:</td>
                <td><input type="text" name="up_ime"></td>
            </tr>
            <tr>
                <td>Geslo:</td>
                <td><input type="password" name="geslo"></td>
            </tr>
            <tr>
                <td></td>
                <td><input type="submit" name="submit" value="Prijava"></td>
            </tr>
        </table>
    </form>

    <?php
        if ($_POST['submit']) {

            $db = new Uporabnik();

	        if($db->login($_POST['up_ime'], $_POST['geslo']) == true){
                echo "Uporabniško ime in geslo je pravilno!";
            }
            else{
                echo "Uporabniško ime in geslo ni pravilno!";
            }

        }
        
    ?>
</body>

</html>
