<!DOCTYPE html>
<html lang="en">
<?php
            include("head.inc");
            //$translations = simplexml_load_file("translation.xml");
            ?>

<body>
    
    <?php
            include("nav.inc");
            ?>


    <main>
        <article>
            <header>
                <h2><?getTranslation("title1", $lang)?></h2>
                <p></p>
            </header>
            <div class="article_main">
                <h3><?getTranslation("title1_1", $lang);?></h3>
                
                <p>><?getTranslation("txt1_1", $lang);?></p>
            </div>
            <footer>
                <p><?getTranslation("footer1", $lang);?></p>
            </footer>
        </article>
        
        <article>
            <header>
                <h2><?getTranslation("title2", $lang)?></h2>
                <p></p>
            </header>
            <div class="article_main">
                <h3><?getTranslation("title2_1", $lang)?></h3>
                
                <p><?getTranslation("txt2_1", $lang);?></p>
                
                <h3><?getTranslation("title2_2", $lang)?></h3>
                
                <p><?getTranslation("txt2_2", $lang);?></p>
            </div>
            <footer>
                <p><?getTranslation("footer2", $lang);?></p>
            </footer>
        </article>

    </main>
    <footer>
        <?php
            include("footer.inc");
            ?>
    </footer>
</body>

</html>
