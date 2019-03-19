-- phpMyAdmin SQL Dump
-- version 4.7.3
-- https://www.phpmyadmin.net/
--
-- Hôte : ronanroyefdigidb.mysql.db
-- Généré le :  mar. 19 mars 2019 à 22:44
-- Version du serveur :  5.6.42-log
-- Version de PHP :  5.6.39

SET SQL_MODE = "NO_AUTO_VALUE_ON_ZERO";
SET AUTOCOMMIT = 0;
START TRANSACTION;
SET time_zone = "+00:00";


/*!40101 SET @OLD_CHARACTER_SET_CLIENT=@@CHARACTER_SET_CLIENT */;
/*!40101 SET @OLD_CHARACTER_SET_RESULTS=@@CHARACTER_SET_RESULTS */;
/*!40101 SET @OLD_COLLATION_CONNECTION=@@COLLATION_CONNECTION */;
/*!40101 SET NAMES utf8mb4 */;

--
-- Base de données :  `ronanroyefdigidb`
--

-- --------------------------------------------------------

--
-- Structure de la table `translations`
--

CREATE TABLE `translations` (
  `section` varchar(64) NOT NULL,
  `EN` longtext NOT NULL,
  `FR` longtext NOT NULL,
  `EL` longtext NOT NULL
) ENGINE=InnoDB DEFAULT CHARSET=utf8mb4;

--
-- Déchargement des données de la table `translations`
--

INSERT INTO `translations` (`section`, `EN`, `FR`, `EL`) VALUES
('about', 'Who we are', 'À propos de nous', 'Ποιοί είμαστε'),
('advice', 'Our advice', 'Nos conseils', 'Η Συμβουλή μας'),
('Advice-residence-1', 'Students looking for work can obtain a provisional residence permit marked \"Recherche d\'emploi ou Création d\'entreprise\" authorizing them to reside in France for up to 12 months, on a non-renewable basis. Specific provisions may exist in bilateral agreements.', 'Les étudiants à la recherche d\'un travail peuvent obtenir un titre de séjour provisoire portant la mention \"Recherche d\'emploi ou création d\'entreprise\", les autorisant à résider en France jusqu\'à 12 mois, sur une base non renouvelable. Des dispositions spécifiques peuvent exister dans les accords bilatéraux.', 'Οι σπουδαστές που αναζητούν εργασία μπορούν να λάβουν προσωρινή άδεια διαμονής με την ένδειξη \"Recherche d\'emploi ou Création d\'entreprise\" που τους επιτρέπει να διαμένουν στη Γαλλία για διάστημα έως 12 μηνών, με μη ανανεώσιμη βάση. Υπάρχουν ειδικές διατάξεις στις διμερείς συμφωνίες.'),
('Advice-residence-2', 'Such a residence permit allows them to undertake a first professional experience and look for an employed position related to their academic backgrounds.', 'Un tel titre de séjour leur permet d’entreprendre une première expérience professionnelle et de rechercher un emploi correspondant à leur parcours universitaire.\r\nUn «changement de statut» doit être demandé à la préfecture du lieu de résidence de l’étranger en France deux mois avant l’expiration du permis de séjour en raison de sa situation et correspondant au motif de son séjour en France.', 'Μια τέτοια άδεια διαμονής τους επιτρέπει να πραγματοποιήσουν μια πρώτη επαγγελματική εμπειρία και να αναζητήσουν μια θέση απασχόλησης που σχετίζεται με το ακαδημαϊκό τους υπόβαθρο.'),
('Advice-residence-3', 'A ‘change of status’ must be applied for at the Préfecture of the foreign national’s place of residence in France two months before this residence permit expires pursuant to their situation and corresponding to the reason for their stay in France.', 'Un tel titre de séjour leur permet d’entreprendre une première expérience professionnelle et de rechercher un emploi correspondant à leur parcours universitaire.\r\nUn «changement de statut» doit être demandé à la préfecture du lieu de résidence de l’étranger en France deux mois avant l’expiration du permis de séjour en raison de sa situation et correspondant au motif de son séjour en France.', 'Η μεταβολή του καθεστώτος πρέπει να ζητείται στο κράτος της κατοικίας του αλλοδαπού στη Γαλλία δύο μήνες πριν από τη λήξη της άδειας διαμονής σύμφωνα με την κατάστασή του και ανάλογα με τον λόγο της διαμονής στη Γαλλία.'),
('Advice-residence-Greece-1', 'If you want to go to Greece you need a valid National Identity Card or Passport for French, Belgian or Swiss nationals. Greece as a member of the Schengen Agreement, has abolished controls on common internal lands, at air and sea borders and allows Member-State citizens to travel around without a visa for a short stay period of up to three (3) months. Citizens coming from countries that have not yet joined Schengen Area may require a visa to enter Greece.', 'Si vous souhaitez vous rendre en Grèce, vous devez posséder une carte d\'identité nationale ou un passeport en cours de validité pour les ressortissants français, belges ou suisses. La Grèce, en tant que membre de l\'accord de Schengen, a supprimé les contrôles sur les terres intérieures communes, aux frontières aériennes et maritimes, et permet aux citoyens des États membres de se déplacer sans visa pour une courte période allant jusqu\'à trois (3) mois. Les citoyens provenant de pays qui ne sont pas encore membres de l\'espace Schengen peuvent avoir besoin d\'un visa pour entrer en Grèce.', 'Αν θέλετε να μεταβείτε στην Ελλάδα χρειάζεστε έγκυρη Εθνική Ταυτότητα ή Διαβατήριο για Γάλλους, Βελγικούς ή Ελβετούς πολίτες. Η Ελλάδα, ως μέλος της Συμφωνίας του Σένγκεν, έχει καταργήσει τους ελέγχους σε κοινές εσωτερικές εκτάσεις, στα αεροπορικά και θαλάσσια σύνορα και επιτρέπει στους πολίτες των κρατών μελών να ταξιδεύουν χωρίς θεώρηση για περίοδο σύντομης παραμονής μέχρι τρεις (3) μήνες. Οι πολίτες που προέρχονται από χώρες που δεν έχουν ακόμα ενταχθεί στη ζώνη Σένγκεν ενδέχεται να χρειαστούν βίζα για να εισέλθουν στην Ελλάδα.'),
('Advice-residence-Greece-title', 'Applying for a residence permit in Greece ', 'Demander un permis de séjour en Grèce', 'Υποβολή αίτησης για άδεια παραμονής στην Ελλάδα'),
('Advice-residence-intro', 'If you need a residence permit, the residence card is the most common for expatriates. There are several types and all are renewable. Costs range from EUR 79 for students to EUR 269 for employed adults.\r\n', 'Si vous avez besoin d\'un permis de séjour, la carte de séjour est la plus courante pour les expatriés. Il existe plusieurs types et tous sont renouvelables. Les coûts vont de 79 EUR pour les étudiants à 269 EUR pour les adultes employés.', 'Εάν χρειάζεστε άδεια παραμονής, η κάρτα διαμονής είναι η πιο κοινή για τους ομογενείς. Υπάρχουν διάφοροι τύποι και όλα είναι ανανεώσιμα. Το κόστος κυμαίνεται από 79 ευρώ για τους σπουδαστές σε 269 ευρώ για τους απασχολούμενους ενήλικες.'),
('Advice-residence-title', 'Applying for a residence permit in France', 'Recherche de travail', 'Αναζήτηση εργασίας'),
('agreement', 'User agreement', 'Accord de l\'utilisateur', 'Όροι Χρήσης'),
('follow', 'Follow us : ', 'Suivez nous sur :', 'Ακολουθήστε μας'),
('join', 'Join us', 'Rejoignez nous', 'Συμμετοχή'),
('legal', 'Legal information', 'Informations légales', 'Νομικές Πληροφορίες'),
('links', 'Useful links : ', 'Liens utiles : ', 'Χρήσιμοι Σύνδεσμοι'),
('login', 'Log in', 'Connexion', 'Σύνδεση'),
('questions', 'Questions', 'Questions', 'Ερωτήσεις'),
('services', 'Our services', 'Nos services', 'Οι Υπηρεσίες μας'),
('support', 'Support us', 'Soutenez nous', 'Υποστηρίξτε μας'),
('working_together', 'Working together', 'Travaillons ensemble', 'Δουλεύοντας μαζί');

--
-- Index pour les tables déchargées
--

--
-- Index pour la table `translations`
--
ALTER TABLE `translations`
  ADD PRIMARY KEY (`section`),
  ADD UNIQUE KEY `section` (`section`);
COMMIT;

/*!40101 SET CHARACTER_SET_CLIENT=@OLD_CHARACTER_SET_CLIENT */;
/*!40101 SET CHARACTER_SET_RESULTS=@OLD_CHARACTER_SET_RESULTS */;
/*!40101 SET COLLATION_CONNECTION=@OLD_COLLATION_CONNECTION */;
