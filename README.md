# 🧮 Jeu de Calcul – Mini-Projet-Langage-C

Petit projet réalisé en **langage C** pour s’entraîner à organiser un programme proprement avec plusieurs fichiers `.c` et `.h`.

Le programme propose un **menu interactif** avec différents exercices de calcul mental et un **système de score** associé à un utilisateur.

Le but était surtout de mieux comprendre :
- comment structurer un projet en C
- comment faire communiquer plusieurs fichiers
- comment utiliser des fonctions
- comment sauvegarder des données dans un fichier

---

## 🎯 Objectifs du projet

- Apprendre à organiser un programme en plusieurs fichiers
- Comprendre l’utilité des fichiers `.h`
- Manipuler des fonctions avec paramètres
- Générer des nombres aléatoires
- Mettre en place un système de score
- Créer un menu clair dans le terminal
- S’entraîner au calcul mental

---

## 🧱 Structure du projet

Le projet est découpé en plusieurs fichiers pour que ce soit plus lisible et plus logique :

### main.c
Point d’entrée du programme  
Il lance le menu principal.

### menu.c / menu.h
Gère tout ce qui concerne l’interface :

- affichage du menu
- récupération du choix utilisateur
- affichage du score
- navigation dans le programme

### calcul.c / calcul.h
Contient les exercices de calcul :

- addition
- soustraction
- multiplication
- division
- tables de multiplication

Chaque exercice génère des nombres aléatoires et demande la réponse à l’utilisateur.

### score.c / score.h
Gère le système de score :

- demande le nom du joueur
- lit le score actuel dans un fichier
- ajoute des points selon la réussite
- sauvegarde le score

---

## 🎮 Fonctionnement du programme

Quand on lance le programme :

1. On entre son nom
2. Le score existant est récupéré
3. Un menu propose plusieurs types de calculs
4. Les points sont ajoutés selon la réussite :

- bonne réponse du premier coup → **10 points**
- bonne réponse du deuxième coup → **5 points**
- bonne réponse du troisième coup → **1 point**

Le score est sauvegardé automatiquement.

---

## 🛠️ Technologies utilisées

- Langage C
- Fonctions
- Pointeurs
- Fichiers `.h`
- Génération aléatoire (`rand`)
- Lecture / écriture de fichiers (`stdio.h`)

Aucune bibliothèque externe utilisée.

---

## 🚀 Compiler et lancer le projet

Dans le dossier du projet :

```bash
gcc src/*.c -I include -o jeu
```

Puis lancer :

```bash
./jeu
```

---

## 💡 Ce que j’ai appris

Ce projet m’a permis de mieux comprendre :

- pourquoi on sépare le code en plusieurs fichiers
- comment utiliser des pointeurs (`char *`, `int *`)
- comment éviter les erreurs de compilation
- comment organiser un programme de manière logique
- comment créer un petit programme interactif

C’était aussi un bon entraînement pour réfléchir à la structure avant d’écrire le code.

---

## ✍️ Auteur

Projet réalisé par **Tealyx**, **XenozMLV**, **michael92-creator** et **Imed**  
Dans le cadre de l’apprentissage du langage C.

---

## 🤖 Utilisation de l’intelligence artificielle

Une intelligence artificielle a été utilisée comme aide pour :

- comprendre certains concepts (pointeurs, static, organisation du projet)
- corriger certaines erreurs de compilation
- mieux structurer les fichiers `.c` et `.h`

Le code a été écrit, testé et modifié manuellement afin de comprendre le fonctionnement.

L’objectif était d’apprendre, pas de générer un programme automatiquement.
