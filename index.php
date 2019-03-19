<?php
        include("connection.inc");
            include("head.inc");
            //$translations = simplexml_load_file("translation.xml");
?>

<!DOCTYPE html>
<html lang="en">

<body>

    <?php
            include("nav.inc");
    ?>
    <main>
        <div class="fullWidth" id="pic1">
            
        </div>
        <article>
            <header>
            <h2>All users (not secure at all, just debugging)</h2>
            </header>
            <div class="article_main">
                <p>use phpMyadmin to reset.</p>
        <p>
            <?php
        $select_user = $db->prepare("SELECT * FROM login_credentials;");
        $select_user->execute();
        echo("<br/>");
        while($user = $select_user->fetch()){
            echo " <br/>id : $user[0]";
            echo " <br/>username : $user[1]";
            echo " <br/>pass hash : $user[2]";
            echo " <br/>first name : $user[3]";
            echo " <br/>last name : $user[4]";
            echo " <br/>_______________________";
    }
        ?>
        </p>
            </div>
        </article>

        <article>
            <header><h2>LOG IN</h2></header>
            <div class="article_main">
                <p>
                    <?
                    echo $msg;
                    ?>
                </p>
            </div>
        </article>


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
            include("footer.inc");
            ?>
    </footer>
</body>

</html>
