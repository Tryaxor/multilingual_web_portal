# multilingual_web_portal
International team project

TODO :

Creating and managing accounts:

*Setup host for database and website

*Create a database to store accounts (login, password, [skills])     skills(id, skill1, skill2, …, self-described_skills) (SQL)

*Add an account through a UI (php -> modifying the database)

*Connect to the website (php -> checking database)

*Disconnect from the website (php)

*Public sections should allow anyone to view them

*Private ones should redirect you before you can see them if you’re not connected

*Use a query to filter through the database of accounts

*Make a UI for users to search

Making the website translatable in three languages :

*Choose a way to detect language

*Store each section in a database (1 table per language, each row contains one section of text, translated correctly in all three languages) 

*Access the database through PHP using a function.

*Calling the function for each section of the site.

DONE:

-Basic PHP page with page structure

-Temporary CSS

-Placeholder function getTranslation($section, $lang)  *$lang could be changed to global*

