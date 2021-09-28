<?php

class Uporabnik {

    private $id;
    public $ime;
    public $priimek;
    public $up_ime;
    public $geslo;
    public $dbcon;


    public function __construct() {
         $this->dbcon = pg_connect("host=www2.scptuj.si port=5432 dbname=milosic_jan1 user=milosic_jan1 password=jadztuk2003");

         if (!$this->dbcon) {
            echo "Napaka pri povezavi na PB.\n";
            exit;
        }
    }

    public function __destruct() {
        pg_close($this->dbcon);
    }


    public function vpis_novega($ime,$priimek,$up_ime,$geslo) {
	if ($this->ali_ze_obstaja($up_ime)==true){
            echo "Uporabnik s tem uporabniškim imenom že obstaja";
            return;
            }
	/*kriptacija*/$sql="INSERT INTO uporabnik (ime,priimek,up_ime,geslo) values ('$ime','$priimek','$up_ime','$geslo')";
        $result = pg_query($this->dbcon, $sql);
        if($result){
            echo "<script type='text/javascript'>alert('Uporabnik registriran!');</script>";
       	   }
        }
  

    public function ali_ze_obstaja($up_ime) {
 
        $sql="select * from uporabnik where up_ime='$up_ime';";
        $result = pg_query($this->dbcon, $sql);

        if (!$result) {
            echo "Napaka v Uporabnik query-ju.\n";
            exit;
        }

        $rows = pg_num_rows($result);

        if($rows == 1){
            return true;
        }
        return false;

    }



    public function login($up_ime,$geslo) {
 
        /*kriptacija*/$sql="select * from uporabnik where up_ime='$up_ime' and geslo='$geslo';";
        $result = pg_query($this->dbcon, $sql);

        if (!$result) {
            echo "Napaka v Uporabnik query-ju.\n";
            exit;
        }

        $rows = pg_num_rows($result);

        if($rows == 1){
            return true;
        }
        return false;

    }


    public function izpis_tabele_uporabnik() {
        $sql="select * from uporabnik ;";
        $result = pg_query($this->dbcon, $sql);
        while ($row = pg_fetch_row($result)) {
          for ($i=0; $i<=count($row);$i++) echo " $row[$i]";
	  $i--;
          echo " STOPLPCEV=$i <br />\n";
        }
   }
}  

