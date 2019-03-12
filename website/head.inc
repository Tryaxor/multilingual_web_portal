
<head>
    <meta charset="utf-8" />
    <title>Mon portfolio | Ronan Royet</title>
    <meta http-equiv="X-UA-Compatible" content="IE=EmulateIE9">
    <meta name="author" content="Ronan Royet" />
    <meta name="description" content="Je suis Ronan Royet, je cherche actuellement un stage dans le domaine du développement informatique, voici mon portfolio" />
    <meta name="keywords" content="portfolio" />
    <link id="result" rel="stylesheet" href="css/style.css" />
    <meta name="viewport" content="width=device-width, initial-scale=1.0">
    
    
</head>
<?php


function getTranslation($section, $lang){

    echo "some SQL query : select from $lang where section= $section";
    
    
}

/*TODO
detect language and change variable $lang
setup SQL database
use right query in getTranslation()

*/

$lang = "en";//default language english

?>