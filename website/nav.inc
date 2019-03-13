<nav id="nav">
    <ul>
        <li>
            <a href="#">
                <?getTranslation("nav1");?></a>
        </li>
        <li>
            <a href="#">
                <?getTranslation("nav2");?></a>
        </li>
        <li>
            <a href="#">
                <?getTranslation("nav3");?></a>
        </li>
        <li>
            <a href="#">
                <?getTranslation("nav4");?></a>
        </li>
        <li>
            <button class="modalOpener">Sign in</button>
        </li>
        <li>
            <button class="modalOpener">Sign up</button>
        </li>
    </ul>



    <!-- Modals (should be in the same order than the buttons) -->
    <div class="modal">

        <!-- Modal content -->
        <div class="modal-content">
            <div class="modal-header">
                <span class="close">&times;</span>
                <h2>Sign in</h2>
            </div>
            <div class="modal-body">
                <form action="" method="get">

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
                <form action="" method="post">
                    <div class="container">
                        <p>Please fill in this form to create an account.</p>
                        <div>
                            <label for="username"><b>Username</b></label>
                            <input type="text" placeholder="Enter username" name="username" required>
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


</nav>
