#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* --------------------| Fonctions des Affichages des choix de séléction des jeux ainsi que les choix concernés |-------------------- */

void affichechoix() {
    printf("+-------------------------------+\n");
    printf("|1 : Addition                   |\n");
    printf("|2 : Soustraction               |\n");
    printf("|3 : Multiplication             |\n");
    printf("|4 : Tables des multiplications |\n");
    printf("|5 : Divisions                  |\n");
    printf("|0 : Sortir du jeu              |\n");
    printf("+-------------------------------+\n");
    printf("Quel est votre choix ?\n");
}

void choix() {
    int choix = 0;

    scanf("%d", &choix);

    switch (choix) {
        case 1:
            addition();
            break;

        case 2:
            soustraction();
            break;

        case 3:
            multiplication();
            break;

        case 4:
            affichechoixtable(); // Autre choix dans ce cas la
            choixtable();
            break;

        case 5:
            printf("Divisions\n");
            break;

        case 0:
            printf("Merci de votre visite.\n");
            break;

        default:
            printf("Choix invalide.\n");
    }
}

/* --------------------| Fonctions des Affichages des choix des tables de multiplication ainsi que les choix concernés |-------------------- */

void affichechoixtable() {
    printf("+------------------------------------------------+\n");
    printf("|1 : Afficher une table de multiplication        |\n");
    printf("|2 : S'entraîner sur une table de multiplication |\n");
    printf("|0 : Sortir du jeu                               |\n");
    printf("+------------------------------------------------+\n");
    printf("Quel est votre choix ?\n");
}

void choixtable() {
    int choix = 0;

    scanf("%d", &choix);

    switch (choix) {
        case 1:
            affichetable();
            break;

        case 2:
            jeuxtable();
            break;

        case 0:
            printf("Merci de votre visite.\n");
            break;

        default:
            printf("Choix invalide.\n");
    }
}

/* --------------------| Fonctions de l'addition |-------------------- */

void addition() {
    int user_rep = 0, rep = 0;
    
    int a = rand() % 101;
    int b = rand() % 101;

    rep = a + b;
    printf("Addition\n");
    printf("%d + %d = ?\n", a, b);
    printf("Entrez le résultat : ");
    scanf("%d", &user_rep);
    printf("Vous avez entré %d\n", user_rep);
    
    if (user_rep == rep) {
        printf("Bonne réponse !");
    }
    else {
        printf("Mauvaise réponse...\n");
        printf("La réponse était %d", rep);
    }
}

/* --------------------| Fonctions de la multiplication |-------------------- */

void multiplication() {
    int user_rep = 0, rep = 0;
    
    int a = rand() % 11;
    int b = rand() % 11;

    rep = a * b;
    printf("Multiplication\n");
    printf("%d * %d = ?\n", a, b);
    printf("Entrez le résultat : ");
    scanf("%d", &user_rep);
    printf("Vous avez entré %d\n", user_rep);
    
    if (user_rep == rep) {
        printf("Bonne réponse !");
    }
    else {
        printf("Mauvaise réponse...\n");
        printf("La réponse était %d", rep);
    }
}

/* --------------------| Fonction de la soustraction |-------------------- */

void soustraction() {
    int user_rep = 0, rep = 0, temp = 0;
    
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
    printf("Entrez le résultat : ");
    scanf("%d", &user_rep);
    printf("Vous avez entré %d\n", user_rep);
    
    if (user_rep == rep) {
        printf("Bonne réponse !");
    }
    else {
        printf("Mauvaise réponse...\n");
        printf("La réponse était %d", rep);
    }
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
void jeuxtable() {
    int i, n, rep;

    printf("Sur quel table de multiplication souhaitez-vous vous exercez ?\n");
    scanf("%d", &n);

    for (i = 0; i < 11; i++)
    {
        printf("%d * %d = ", n, i);
        scanf("%d", &rep);

        if (rep == n * i)
        {
            printf("Gagné !\n");
        }
        else {
            printf("Perdu...\n");
        } 
    }

}

/* --------------------| Fonction principal |-------------------- */

int main(void) {
    srand(time(NULL));
    affichechoix();
    choix();
}