<?php

session_start();
$msg="";

if(isset($_POST["disconnect"])){//if user presses disconnect button
    $_SESSION = Array();
    session_destroy();
}

if(isset($_POST["login"])){
    //check login
    $username = $_POST["username"];
    $select_user = $db->prepare("SELECT username FROM `login_credentials` WHERE username = '$username'");
    $select_user->execute();
    
    
    if($u = $select_user->fetch()){
        
        $msg .= "user : ".$u[0]."<br/>";

        $select_pass = $db->prepare("SELECT passwordHash FROM `login_credentials` WHERE username = '$u[0]'");
        $select_pass->execute();

        $passSent = hash('sha256', $_POST["psw"]);
        $p = $select_pass->fetch()[0];
        
        $msg.= "password sent : ".$_POST["psw"]."<br/>";
        
        if($passSent == $p){
            $msg .= "Logged in";
        }
        else{
            $msg .= "password is incorrect.";
        }


    }
    else{
        $msg = "no account with this username.<br/>";
    }
}

if(isset($_POST["signUp"])){
    //create account
    
    $username = $_POST["username"];
   $select_user = $db->prepare("SELECT username FROM `login_credentials` WHERE username = '$username'");
    $select_user->execute();
    
    if($u = $select_user->fetch()){
        //usernames are unique, if there's a match, no account creation.
        unset($username);
    }
    
    $firstName = $_POST["firstName"];
    $lastName = $_POST["lastName"];
    $password = $_POST["psw"];
    $repeat = $_POST["psw-repeat"];
    
    if((isset($username) &&
      isset($firstName) &&
      isset($lastName) &&
      isset($password) &&
      isset($repeat)) &&
      ($password == $repeat)){
        
    
    $insert_user = $db->prepare("INSERT INTO login_credentials (username, passwordHash, firstName, lastName) VALUES ('$username',  SHA2('$password', 256), '$firstName', '$lastName')");
    $insert_user->execute();
                                
    }
    
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
    <link rel="stylesheet" href="http://www.ronan-royet.fr/web_portal/css/style.css" />
    <link rel="icon" href="http://www.ronan-royet.fr/web_portal/img/icon.gif" />
    <link href="https://fonts.googleapis.com/css?family=Oswald" rel="stylesheet">
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    <script src="http://www.ronan-royet.fr/web_portal/js/main.js"></script>


</head>

<?php

function getTranslation($section){
    global $db, $lang;
    
    
    if($lang != 'EN' && $lang != 'FR' && $lang != 'EL'){
        $lang = "EN";
    }//if lang is not one of these, lang = EN
    
    
    $select_translation = $db->prepare("SELECT $lang FROM translations WHERE section = '$section';");
    $select_translation->execute();
    
    if($txt = $select_translation->fetch()){
        echo $txt[0];
    }
    else{
        echo "The translation for the $section section could not be reached.";
    }
    
}

//INSERT INTO translations (section, EN,FR,EL) VALUES ("join", "Join us", "Rejoignez-nous", "Συμμετοχή");

$lang = "EN";//default language english

if(isset($_GET["lang"])){
    $lang = $_GET["lang"];
}

?>
