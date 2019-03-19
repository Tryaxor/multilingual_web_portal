<?php
        include("../connection.inc");
            include("../head.inc");
            //$translations = simplexml_load_file("translation.xml");
?>

<!DOCTYPE html>
<html lang="en">

<body>

    <?php
            include("../nav.inc");
    ?>
    <main>
        <div class="fullWidth" id="pic1">
            
        </div>
        
        <article>
            <header>
                <h2>
                    <?getTranslation("join");?>
                </h2>
                <p></p>
            </header>
            <div class="article_main">
                <h3>
                    <?//getTranslation("title1_1");?>
                </h3>

                <p>
                    <?//getTranslation("txt1_1");?>
                </p>
            </div>
            <footer>
                <p>
                    <?//getTranslation("footer1");?>
                </p>
            </footer>
        </article>

       

    </main>
    <footer>
        <?php
            include("../footer.inc");
            ?>
    </footer>
</body>

</html>
