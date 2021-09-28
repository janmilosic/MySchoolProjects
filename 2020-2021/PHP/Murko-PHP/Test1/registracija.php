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
        <title>Registracija</title>
        <?php
            if (isset($_POST['submit'])) {

                $db = new Uporabnik();

	            $db->vpis_novega($_POST['ime'], $_POST['priimek'], $_POST['up_ime'], $_POST['geslo']);
            }
        ?>
    </head>

    <body>
        <h1>Registracija</h1>
        <form action="<?php echo $_SERVER['PHP_SELF']; ?>" method="post">
            <table>
                <tr>
                    <td>Ime:</td>
                    <td><input type="text" name="ime"></td>
                </tr>
                <tr>
                    <td>Priimek:</td>
                    <td><input type="text" name="priimek"></td>
                </tr>
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
                    <td><input type="submit" name="submit" value="Registracija"></td>
                </tr>
            </table>
        </form>
    </body>
</html>
