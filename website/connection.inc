<?php

// Include DB login
include_once("server.inc");

// Connection to the database

try {
 $db = new PDO("mysql:host=".HOST.";dbname=".DB, USER, PASS);
} catch (Exception $e) {
 echo "An error has occured : <br />";
 echo "Error : ".$e->getMessage()."<br />";
 echo "Code : ".$e->getCode();
 die();
}

?>
