# multilingual_web_portal
International team project

_*-*-*-*-*-* TODO :_

_Creating and managing accounts:_

*Create a database to store accounts (login, password, [skills])     skills(id, skill1, skill2, …, self-described_skills) (SQL)

*Disconnect from the website (php)

*Public sections should allow anyone to view them

*Private ones should redirect you before you can see them if you’re not connected

*Use a query to filter through the database of accounts

*Make a UI for users to search

_Making the website translatable in three languages :_

*Choose a way to detect language

_*-*-*-*-*-* DONE:_

-Basic PHP page with page structure

-Temporary CSS

-Placeholder function getTranslation($section, $lang)  *$lang could be changed to global*

-Setup host for database and website

-UI to sign in/ sign up

_Creating and managing accounts:_

-Connect to the website (php -> checking database)

-Add an account through a UI (php -> modifying the database)

_Making the website translatable in three languages :_

-Store each section in a database (1 table per language, each row contains one section of text, translated correctly in all three languages) 

-Access the database through PHP using a function.

-Calling the function for each section of the site.


