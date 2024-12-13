Mini-compilateur ISIL2024
Ce projet est un mini-compilateur développé dans le cadre du module de compilation. Il a été conçu pour analyser, vérifier, et traduire un langage spécifique appelé ISIL2024. Le compilateur prend en charge les différentes phases de compilation, notamment l'analyse lexicale, syntaxique, et sémantique.

Fonctionnalités principales
Analyse lexicale :

Reconnaissance des mots-clés, identificateurs, constantes, opérateurs, et formats d'entrée/sortie.
Gestion des commentaires sur une ou plusieurs lignes.
Détection d'erreurs lexicales avec indication de ligne et d'entité erronée.
Analyse syntaxique :

Vérification de la structure grammaticale des programmes écrits en ISIL2024.
Gestion des règles de déclaration, initialisation, boucles, et instructions arithmétiques.
Analyse sémantique :

Vérification des déclarations des variables et constantes avant leur utilisation.
Détection des erreurs sémantiques, telles que :
Modification d'une constante.
Dépassement de la taille d’un tableau.
Incompatibilités de types lors des opérations.
Gestion des tableaux :

Déclaration des tableaux avec inclusion de leur taille.
Vérification des indices pour prévenir les dépassements.
Support des instructions d'entrée/sortie :

Lecture via In(format, idf);
Écriture via Out("texte %format", idf);
Table des symboles :

Enregistrement des identifiants, types, et propriétés (constantes, variables, tableaux).
Affichage clair de la table des symboles après compilation.

Technologies utilisées
Flex : Génération de l'analyseur lexical.
Bison : Génération de l'analyseur syntaxique.
C : Implémentation des fonctions d'analyse sémantique et gestion de la table des symboles.


