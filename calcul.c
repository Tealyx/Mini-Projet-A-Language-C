#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>
#include "score.h"
#include "calcul.h"


/* --------------------| Fonctions de l'addition |-------------------- */

void addition(char *nom) {
    int user_rep = 0, rep = 0, compteur = 0;
    bool est_correct = false;
    
    int a = rand() % 101;
    int b = rand() % 101;

    rep = a + b;
    printf("Addition\n");
    printf("%d + %d = ?\n", a, b);
    
    while(compteur < 3 && est_correct == false) 
    {
        printf("Entrez le résultat : ");
        scanf("%d", &user_rep);
        printf("Vous avez entré %d\n", user_rep);
        
        if (user_rep == rep) {
            printf("Bonne réponse !\n");
            est_correct = true;
        }
        else {
            printf("Mauvaise réponse...\n");
            compteur = compteur + 1;
        }
    }

    calcul_points(compteur, nom, est_correct, rep);

}

/* --------------------| Fonction de la soustraction |-------------------- */

void soustraction(char *nom) {
    int user_rep = 0, rep = 0, temp = 0 , compteur = 0;
    bool est_correct = false ;
    
    int a = rand() % 101;
    int b = rand() % 101;

    if (a < b) {
        temp = b;
        b = a;
        a = temp;
    }

    rep = a - b;
    printf("Soustraction\n");
    printf("%d - %d = ?\n", a, b);
    while(compteur < 3 && est_correct == false) {
        printf("Entrez le résultat : ");
        scanf("%d", &user_rep);
        printf("Vous avez entré %d\n", user_rep);
        
        if (user_rep == rep) {
            printf("Bonne réponse !\n");
            est_correct = true;
        }
        else {
            printf("Mauvaise réponse...\n");
            compteur = compteur + 1;
        }
    }

    calcul_points(compteur, nom, est_correct, rep);

}

/* --------------------| Fonctions de la multiplication |-------------------- */

void multiplication(char *nom) {
    int user_rep = 0, rep = 0, compteur = 0 ;
    bool est_correct = false;
    
    int a = rand() % 101;
    int b = rand() % 101;

    rep = a * b;
    printf("Multiplication\n");
    printf("%d * %d = ?\n", a, b);
    while(compteur < 3 && est_correct == false) {
        printf("Entrez le résultat : ");
        scanf("%d", &user_rep);
        printf("Vous avez entré %d\n", user_rep);
        
        if (user_rep == rep) {
            printf("Bonne réponse !\n");
            est_correct = true;
        }
        else {
            printf("Mauvaise réponse...\n");
            compteur = compteur + 1;
        }
    }
        
    calcul_points(compteur, nom, est_correct, rep);

}

/*-------------------------| Fonctions de la division |-------------------*/

void division(char *nom) {
    int user_rep = 0, rep = 0, compteur = 0;
    bool est_correct = false;
    
    int a = rand() % 101;
    int b;

    do {
        b = rand() % 101;
    } while (b == 0);

    rep = a / b;
    printf("Division\n");
    printf("%d / %d = ?\n", a, b);
    while (compteur < 3 && est_correct == false)
    {
        printf("Entrez le résultat : ");
        scanf("%d", &user_rep);
        printf("Vous avez entré %d\n", user_rep);
        
        if (user_rep == rep) {
            printf("Bonne réponse !\n");
            est_correct = true;
        }
 
       else {
            printf("Mauvaise réponse...\n");
            compteur = compteur + 1;
        }
    }

    calcul_points(compteur, nom, est_correct, rep);
}

/* --------------------| Fonctions des tables de multiplication |-------------------- */

// Choix 1 : Affiche la table de l'utilisateur
void affichetable() {
    int i, n;

    printf("Quelle table de multiplication souhaitez-vous afficher ?\n");
    scanf("%d", &n);

    for (i = 0; i < 11; i++)
    {
        printf("%d * %d = %d\n", n, i, n * i);
    }
    
}

// Choix 2 : L'utilisateur s'exerce sur la table de son choix
void jeuxtable(char *nom) {
    int i, n, rep;
    int score_actuel = lire_point(nom); // Lit le score actuel

    printf("Sur quel table de multiplication souhaitez-vous vous exercez ?\n");
    scanf("%d", &n);

    for (i = 0; i < 11; i++)
    {
        printf("%d * %d = ", n, i);
        scanf("%d", &rep);

        if (rep == n * i)
        {
            printf("Gagne !\n");
        }
        else {
            printf("Perdu...\n");
        } 
    }
}