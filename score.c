#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include "score.h"

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

    fprintf(f, "%d", score); // Écrit le nouveau score

    fclose(f);
}

void calcul_points(int compteur, char *nom, bool est_correct, int rep) {
    int score_actuel = lire_point(nom); // Lit le score actuel
    
    if (est_correct == false) {
        printf("La réponse était %d\n", rep);
    }
    else if (compteur == 0)
    {
        ajouter_point(nom, score_actuel + 10); // Ajoute 10 au score actuel
    }
    else if (compteur == 1)
    {
        ajouter_point(nom, score_actuel + 5); // Ajoute 5 au score actuel
    }
    else if (compteur == 2)
    {
        ajouter_point(nom, score_actuel + 1); // Ajoute 1 au score actuel
    }
}