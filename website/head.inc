<?php

 session_start();

if(isset($_POST["disconnect"])){//if user presses disconnect button
    $_SESSION = Array();
    session_destroy();
}

if(isset($_POST["login"])){
    //check login
    //$u = !isempty(SELECT username FROM users WHERE username = $_POST["username"]);
    //$p = !isempty(SELECT pass FROM users WHERE pass = hash($_POST["psw]));
    //might not be secure
    
    //if($u && $p){
       //open session
        //$_SESSION['user'] = $usr;
    //}
        //else{
         //bad login;
        //}

}

if(isset($_POST["signUp"])){
    //create account
    //if all requirement are met
    //INSERT INTO users (username, passwordHash, firstName, lastName);
}

?>

<head>
    <meta charset="utf-8" />
    <title>Let's Help</title>
    <meta http-equiv="X-UA-Compatible" content="IE=EmulateIE9">
    <meta name="author" content="Ronan Royet" />
    <meta name="description" content="" />
    <meta name="keywords" content="" />
    <link id="result" rel="stylesheet" href="css/style.css" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <script src="js/main.js"></script>


</head>
<?php


function getTranslation($section){
    global $lang;
    //$txt =  SELECT $section FROM $lang
    //echo $txt;
    echo "$section";
    
}

/*TODO
detect language and change variable $lang
setup SQL database
use right query in getTranslation()

*/

$lang = "EN";//default language english

?>
