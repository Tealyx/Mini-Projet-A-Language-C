#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stdbool.h>

#include "calcul.h"
#include "score.h"
#include "menu.h"

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

