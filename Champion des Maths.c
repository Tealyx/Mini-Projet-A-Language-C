#include <stdio.h>
#include <stdlib.h>
#include <time.h>

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
            printf("Tables de multiplications\n");
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


int addition() {
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

int multiplication() {
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

int soustraction() {
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

int main(void) {
    srand(time(NULL));
    affichechoix();
    choix();
}