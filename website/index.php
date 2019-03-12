<?php
function getTranslation($section, $lang){
  return "result of the query in that language";
}
?>
<!DOCTYPE html>
<html>
  <head>
  </head>
  <body>
    <h1>The website</h1>
    <div>
      <?php echo getTranslation("intro", "fr"); ?> // the introduction in french for example.
    </div>
  </body>
</html>
