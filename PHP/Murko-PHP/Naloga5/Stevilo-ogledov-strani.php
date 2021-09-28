<?php
   //števec ogledov strani
   session_start();
   if(!isset($_SESSION['stevec']))
      $_SESSION['stevec'] = 1;
   else
      $_SESSION['stevec']++;
?>

<!doctype html>
<html>
<head>
   <meta charset="utf-8">
   <title>Stevilo ogledov</title>
</head>

<body>
<?php echo 'Stevilo ogledov: ' . $_SESSION['stevec']; ?>
</body>
</html>