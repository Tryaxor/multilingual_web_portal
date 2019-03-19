<nav id="nav">
    <ul id="nav_left">
        <li>
            <ul id="language">
                <li><a>English</a></li>
                <li><a>French</a></li>
                <li><a>3rd language</a></li>
            </ul>

        </li>
        <li>
            <button class="modalOpener"><?getTranslation("login");?></button>
        </li>
        <li>
            <button class="modalOpener"><?getTranslation("join");?></button>
        </li>
    </ul>
    <ul id="nav_right">
        <li>
            <a href="http://www.ronan-royet.fr/web_portal/about/"><?getTranslation("about");?></a>
        </li>
        <li>
            <a href="http://www.ronan-royet.fr/web_portal/services/"><?getTranslation("services");?></a>
        </li>
        <li>
            <a href="http://www.ronan-royet.fr/web_portal/advice/"><?getTranslation("advice");?></a>
        </li>
        <li>
            <a href="http://www.ronan-royet.fr/web_portal/working-together/"><?getTranslation("working_together");?></a>
        </li>
        <li>
            <a href="http://www.ronan-royet.fr/web_portal/support/"><?getTranslation("support");?></a>
        </li>
    </ul>

</nav>
<div id="logo">
    <a href="http://www.ronan-royet.fr/web_portal/">
    <img src="http://www.ronan-royet.fr/web_portal/img/LOGOLH.png"/>
    </a>
</div>


<!-- Modals (should be in the same order than the buttons) -->
<div class="modal">

    <!-- Modal content (LOGGING IN) -->
    <div class="modal-content">
        <div class="modal-header">
            <span class="close">&times;</span>
            <h2>Sign in</h2>
        </div>
        <div class="modal-body">
            <form action="<?echo $_SERVER["PHP_SELF"];?>" method="post">

                <div class="container col">
                    <div>
                        <label for="username"><b>Username</b></label>
                        <input type="text" placeholder="Enter Username" name="username" required>
                    </div>

                    <div>
                        <label for="psw"><b>Password</b></label>
                        <input type="password" placeholder="Enter Password" name="psw" required>
                    </div>

                    <div>
                        <input type="submit" name="login" value="login">
                        <label>
                            <input type="checkbox" checked="checked" name="remember"> Remember me
                        </label>
                    </div>
                </div>
            </form>
        </div>
    </div>

</div>

<div class="modal">

    <!-- Modal content -->
    <div class="modal-content">
        <div class="modal-header">
            <span class="close">&times;</span>
            <h2>Sign up</h2>
        </div>
        <div class="modal-body">
            <form action="<?echo $_SERVER["PHP_SELF"];?>" method="post">
                <div class="container">
                    <p>Please fill in this form to create an account.</p>
                    <div>
                        <label for="username"><b>Username</b></label>
                        <input type="text" placeholder="Enter username" name="username" required>
                    </div>

                    <div>
                        <label for="firstName"><b>First Name</b></label>
                        <input type="text" placeholder="Enter username" name="firstName" required>
                    </div>

                    <div>
                        <label for="lastName"><b>Last Name</b></label>
                        <input type="text" placeholder="Enter username" name="lastName" required>
                    </div>

                    <div>
                        <label for="psw"><b>Password</b></label>
                        <input type="password" placeholder="Enter Password" name="psw" required>
                    </div>

                    <div>
                        <label for="psw-repeat"><b>Repeat Password</b></label>
                        <input type="password" placeholder="Repeat Password" name="psw-repeat" required>
                    </div>

                    <div>
                        <label>
                            <input type="checkbox" checked="checked" name="remember"> Remember me
                        </label>
                    </div>

                    <p>By creating an account you agree to our <a href="#">Terms & Privacy</a>.</p>

                    <div class="clearfix">
                        <input type="submit" class="signupbtn" value="Sign Up" name="signUp">
                    </div>
                </div>
            </form>
        </div>
    </div>

</div>
