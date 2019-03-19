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
                    <?getTranslation("Advice-residence-title");?>
                </h2>
                <p></p>
            </header>
            <div class="article_main">
                <p>
                    <?getTranslation("Advice-residence-intro");?>
                </p>

                <p>
                    <?getTranslation("Advice-residence-1");?>
                </p>
                <p>
                    <?getTranslation("Advice-residence-2");?>
                </p>
                
                <p>
                    <?getTranslation("Advice-residence-3");?>
                </p>
            </div>
        </article>
        
        <article>
            <header>
                <h2>
                    <?getTranslation("Advice-residence-Greece-title");?>
                </h2>
                <p></p>
            </header>
            <div class="article_main">
                <p>
                    <?getTranslation("Advice-residence-Greece-1");?>
                </p>
            </div>
        </article>

       

    </main>
    <footer>
        <?php
            include("../footer.inc");
            ?>
    </footer>
</body>

</html>
