<html>
<head>
 <meta charset=UTF-8">
<style>
h1{text-align: left;}
table{font-size:25px}
.table{border:none;}
.polja-gor{background-color:#ccccff;color:white;}
.polja-dol{background-color:#cce6ff;}
.gor-1{height:75px; width:250px}
.dol-1{height:100px; width:250px; text-align: center;}
</style>
</head>
<body>
<h1>OCENA TESTA</h1>
<table>
<tr class="polja-gor">
    <th class="gor-1">Stevilo tock</th>
    <th class="gor-1">Ocena</th>
  </tr>
  <tr class="polja-dol">
    <td class="dol-1">
    <?php
    
    
 $st_tock =(rand(0,100));
 echo $st_tock;

?>
    </td>
    <td class="dol-1">
<?php 
	
   if ($st_tock >= 90  ) {
      echo'<span style="color:green;">oblièno(5)</span>'; ;
   } 
   elseif ($st_tock >= 78) {
      echo '<span style="color:green;">prav dobro (4)</span>';
   }
   elseif ($st_tock >= 65) {
      echo '<span style="color:green;">dobro (3)</span>';
   } 
   elseif ($st_tock >= 50) {
      echo '<span style="color:green;">zadostno (2)</span>';
   } 
   elseif ($st_tock <= 49) {
      echo '<span style="color:red;">nezadostno (1)</span>';
   }
 
?>   
    </td>
</table>


</body>
</html>
