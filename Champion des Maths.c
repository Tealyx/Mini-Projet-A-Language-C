#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

/* --------------------| Fonctions des Affichages des choix de selection des jeux ainsi que les choix concernes |-------------------- */

void affichechoix(char *nom) {
    printf("+-------------------------------+\n");
    printf("|Score : %d                     |\n", lire_point(nom));
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

/*-------------------------| division |-------------------*/

void division(char *nom) {
    int user_rep = 0, rep = 0, compteur = 0;
    bool est_correct = false;
    
    int a = rand() % 101;
    int b = rand() % 101;

    rep = a / b;
    printf("Division\n");
    printf("%d / %d = ?\n", a, b);
    while (compteur < 3 && est_correct == false)
    {
        printf("Entrez le résultat : ");
        scanf("%d", &user_rep);
        printf("Vous avez entré %d\n", user_rep);
        
        if (user_rep == rep) {
            printf("Bonne réponse !");
            est_correct = true;
        }
 
       else {
            printf("Mauvaise réponse...\n");
            compteur = compteur + 1;
        }
    }

    calcul_points(compteur, nom, est_correct, rep);
}

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
            printf("Bonne réponse !");
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
            printf("Bonne réponse !");
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
    printf("Entrez le résultat : ");
    scanf("%d", &user_rep);
    printf("Vous avez entré %d\n", user_rep);
    
    if (user_rep == rep) {
        printf("Bonne réponse !");
    }
    else {
        printf("Mauvaise réponse...\n");
        printf("La réponse était %d\n", rep);
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
            ajouter_point(nom, score_actuel); // Ajoute 1 au score actuel
        }
        else {
            printf("Perdu...\n");
        } 
    }
}

void calcul_points(int compteur, char *nom, bool est_correct, int rep) {
    int score_actuel = lire_point(nom); // Lit le score actuel
    
    if (est_correct == false) {
        printf("La réponse était %d\n", rep);
    }
    else if (compteur == 0)
    {
        ajouter_point(nom, score_actuel + 9); // Ajoute 10 au score actuel
    }
    else if (compteur == 1)
    {
        ajouter_point(nom, score_actuel + 4); // Ajoute 5 au score actuel
    }
    else if (compteur == 2)
    {
        ajouter_point(nom, score_actuel); // Ajoute 1 au score actuel
    }
}

/* Demande le nom du joueur */
char* demander_nom(){
    static char nom[20]; // static garde le nom en mémoire après la fonction
    printf("Entrez votre nom :\n");
    scanf("%s", nom);
    return nom;
}

/* Lit le score du joueur depuis son fichier. Crée le fichier si inexistant */
int lire_point(char *nom) {
    
    FILE *f; // Pointeur vers le fichier
    int score = 0;
    char fichier[30];
    
    sprintf(fichier, "%s.txt", nom); // Crée "nom.txt"

    f = fopen(fichier, "r"); // Ouvre en lecture

    if (f != NULL) // Si le fichier existe
    {
        fscanf(f, "%d", &score); // Lit le score
        fclose(f);
    }
    else { // Si le fichier n'existe pas
        f = fopen(fichier, "w");
        fprintf(f, "0"); // Crée avec score 0
        fclose(f);
    }
    
    return score;
}

/* Ajoute 1 point au score et le sauvegarde */
void ajouter_point(char *nom, int score) {
    
    FILE *f;
    char fichier[30];

    sprintf(fichier, "%s.txt", nom); // Crée "nom.txt"

    f = fopen(fichier, "w"); // Ouvre en écriture (écrase le contenu)

    fprintf(f, "%d", score + 1); // Écrit le nouveau score

    fclose(f);
}

/* --------------------| Fonction principal |-------------------- */

int main(void) {
    srand(time(NULL));


    char *nom = demander_nom();

    lire_point(nom);

    while (1) {
        affichechoix(nom);
        choix(nom);
    }
}

