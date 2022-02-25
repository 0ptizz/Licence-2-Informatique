/* ------------------------------
   output.c
   Écriture de données
   ------------------------------------------------------------
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>


#include "commun.h"

int main(void) {
    struct classe_s classe;
    union bloc_u bloc;
    int i;
    int j;
    classe.nbEtu = 12;
    bloc.classe = classe;

    for (j = 0; j < classe.nbEtu; j++){
        strcpy(bloc.classe.etu[j].nom, "Rico");
        strcpy(bloc.classe.etu[j].prenom, "Bin");
        bloc.classe.etu[j].numero = j + 1;
        bloc.classe.etu[j].moyenne = rand() % 20;

    }
    for (i = 0; i < sizeof(struct classe_s); i++)
        putchar(bloc.data[i]);
    return 0;
}
