#ifndef SCORE_H
#define SCORE_H

char* demander_nom();
int lire_point(char *nom);
void ajouter_point(char *nom, int score);
void calcul_points(int compteur, char *nom, bool est_correct, int rep);

#endif // SCORE_H