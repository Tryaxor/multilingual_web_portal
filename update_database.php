<?php
        include("connection.inc");
            include("head.inc");


if(isset($_POST["addSection"])){
    //create account
    
    $section = $_POST["section"];
    $en = "";
    $fr = "";
    $el = "";
    
    if(isset($_POST["EN"])){
        $en = addslashes($_POST["EN"]);
    }
    
    if(isset($_POST["FR"])){
        $fr = addslashes($_POST["FR"]);
    }
    
    if(isset($_POST["EL"])){
        $el = addslashes($_POST["EL"]);
    }
    
    if(isset($_POST["section"])){
    
    $insert_section = $db->prepare("INSERT INTO translations (section, EN, FR, EL) VALUES ('$section', '$en', '$fr', '$el');");
    $insert_section->execute();                          
    }
}


if(isset($_POST["updateSection"])){
    //create account
    
    if(isset($_POST["section"])){
        $section = $_POST["section"];
    }
    
    if(isset($_POST["lang"])){
        $lang = $_POST["lang"];
    }
    if(isset($_POST["newText"])){
        $newText = addslashes($_POST["newText"]);
    }
    
    if(isset($_POST["EN"])){
        $en = $_POST["EN"];
    }
    
    if(isset($_POST["FR"])){
        $fr = $_POST["FR"];
    }
    
    if(isset($_POST["EL"])){
        $el = $_POST["EL"];
    }
    
    if(isset($section) && isset($lang) && isset($newText)){
    
    $insert_section = $db->prepare("UPDATE translations SET $lang = '$newText' WHERE section = '$section';");
    $insert_section->execute();                          
    }
}


?>

<!DOCTYPE html>
<html lang="en">

<body>

    <?php
            include("nav.inc");
    ?>
    <main>
        <article>
            <header>
                <h2>Notes</h2>
            </header>
            <div class="article_main">
                <p>Don't refresh the page, risk of adding the same section twice.</p>
                <p>Verify there's no duplicates.</p>
                <p>Don't use any special characters or SQL keywords (DROP TABLES; UPDATE, ), }, ] etc.)</p>
            </div>
        </article>

        <article>
            <header>
                <h2>Make translations</h2>
            </header>
            <div class="article_main">
                <form action="<?echo $_SERVER["PHP_SELF"]?>" method="post">
                    <div class="container">
                        <p>Use this to add a section.</p>
                        <div>
                            <label for="en"><b>English</b></label>
                            <textarea placeholder="text in english" name="EN"></textarea>
                        </div>

                        <div>
                            <label for="fr"><b>French</b></label>
                            <textarea placeholder="text in french" name="FR"></textarea>
                        </div>

                        <div>
                            <label for="el"><b>Greek</b></label>
                            <textarea placeholder="text in greek" name="EL"></textarea>
                        </div>

                        <div>
                            <label for="section"><b>Name of the section</b></label>
                            <input type="text" placeholder="name of the section, keep them unique, nothing prevents duplicates (64 chars max)" name="section" required>
                        </div>

                        <div class="clearfix">
                            <input type="submit" class="signupbtn" value="Add section" name="addSection">
                        </div>
                    </div>
                </form>
            </div>
        </article>

        <article>
            <header>
                <h2>Update translation</h2>
            </header>
            <div class="article_main">
                <form action="" method="post">
                    <div class="container">
                        <p>Use this to update a section.</p>
                        <div>
                            <label for="lang"><b>language (required) </b></label>
                            <select name="lang" required>
                                <option value="EL">Greek</option>
                                <option value="EN">English</option>
                                <option value="FR">French</option>
                            </select>
                        </div>

                        <div>
                            <label for="newText"><b>New text</b></label>
                            <textarea placeholder="new text" name="newText" required></textarea>
                        </div>

                        <div>
                            <label for="section"><b>Name of the section</b></label>
                            <input type="text" placeholder="name of the section, keep them unique, nothing prevents duplicates (64 chars max)" name="section" required>
                        </div>

                        <div class="clearfix">
                            <input type="submit" class="signupbtn" value="Update section" name="updateSection">
                        </div>
                    </div>
                </form>
            </div>
        </article>
        
        <article class="big">
                <header>
                    <h2>All translations</h2>
                </header>
                <div class="article_main">
                    <p>use phpMyadmin to adjust.</p>
                    <table>
                        <th>section</th>
                        <th>EN</th>
                        <th>FR</th>
                        <th>EL</th>
                        <?php
        $select_trans = $db->prepare("SELECT * FROM translations;");
        $select_trans->execute();
                        
        $trans = $select_trans->fetch();
        while($trans){
            echo "<tr>";
            echo "<td>$trans[0]</td>";
            echo "<td>$trans[1]</td>";
            echo "<td>$trans[2]</td>";
            echo "<td>$trans[3]</td>";
            echo "</tr>";
            $trans = $select_trans->fetch();
            }
        ?>
                    </table>
                </div>
            </article>

    </main>
    <footer>
        <?php
            include("footer.inc");
            ?>
    </footer>
</body>

</html>
