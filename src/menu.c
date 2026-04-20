#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "calcul.h"
#include "score.h"
#include "menu.h"

/* --------------------| Fonctions des Affichages des choix de selection des jeux ainsi que les choix concernes |-------------------- */

void affichechoix(char *nom) {
    printf("+-------------------------------+\n");
    printf("|Score : %8d               |\n", lire_point(nom));
    printf("|1 : Addition                   |\n");
    printf("|2 : Soustraction               |\n");
    printf("|3 : Multiplication             |\n");
    printf("|4 : Tables des multiplications |\n");
    printf("|5 : Divisions                  |\n");
    printf("|0 : Sortir du jeu              |\n");
    printf("+-------------------------------+\n");
    printf("Quel est votre choix ?\n");
}

void choix(char *nom) {
    int choix = 0;

    scanf("%d", &choix);

    switch (choix) {
        case 1:
            addition(nom);
            break;

        case 2:
            soustraction(nom);
            break;

        case 3:
            multiplication(nom);
            break;

        case 4:
            affichechoixtable(); // Autre choix dans ce cas la
            choixtable(nom);
            break;

        case 5:
            division(nom);
            break;

        case 0:
            printf("Merci de votre visite.\n");
            exit(0); // Force la sortie du programme
            break;

        default:
            printf("Choix invalide.\n");
    }
}

/* --------------------| Fonctions des Affichages des choix des tables de multiplication ainsi que les choix concernés |-------------------- */

void affichechoixtable() {
    printf("+------------------------------------------------+\n");
    printf("|1 : Afficher une table de multiplication        |\n");
    printf("|2 : S'entrainer sur une table de multiplication |\n");
    printf("|0 : Sortir du jeu                               |\n");
    printf("+------------------------------------------------+\n");
    printf("Quel est votre choix ?\n");
}

void choixtable(char *nom) {
    int choix = 0;

    scanf("%d", &choix);

    switch (choix) {
        case 1:
            affichetable();
            break;

        case 2:
            jeuxtable(nom);
            break;

        case 0:
            printf("Merci de votre visite.\n");
            break;

        default:
            printf("Choix invalide.\n");
    }
}