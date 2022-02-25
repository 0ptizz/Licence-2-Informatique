/* ------------------------------
   input.c
   Lecture de données
   ------------------------------------------------------------
*/

#include <stdio.h>
#include <stdlib.h>

#include "commun.h"

int main(void) {
    struct etudiant_s etudiant;
    struct classe_s classe;
    union bloc_u bloc;
    int i;
    int j;
        classe.nbEtu = 12;
        bloc.classe = classe;
    for (i = 0; i < sizeof(struct classe_s); i++)
        bloc.data[i] = getchar();
    for (j = 0; j < bloc.classe.nbEtu; j++){
        etudiant = bloc.classe.etu[j];

        printf("etudiant numero : %u\n", etudiant.numero);
        printf("%f\n", etudiant.moyenne);
        printf("%s\n", etudiant.nom);
        printf("%s\n", etudiant.prenom);
    }

    return 0;
}
