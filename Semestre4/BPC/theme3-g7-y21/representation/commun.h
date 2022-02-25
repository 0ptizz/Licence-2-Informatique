/* ------------------------------
   commun.h
   Définition des types
   ------------------------------------------------------------
*/


struct etudiant_s {
    char nom[50];
    char prenom[40];
    unsigned int numero;
    float moyenne;
};

struct classe_s {
    int nbEtu;
    struct etudiant_s etu[30];
};


union bloc_u {
    struct classe_s classe;
    char data[sizeof(struct classe_s)];


};
