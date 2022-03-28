#include <stdio.h>

float* search_dicho(float v, float* tab, int size){
    int mid = size/2;
    
    if (size <= 0)
        return NULL;
    
    if (tab[mid] == v)
        return &tab[mid];
    
    if (tab[mid] < v)
        return search_dicho(v, &tab[mid + 1], mid);
    
    return search_dicho(v, &tab[0], mid);
}

void main(){
    float tab[16];
    int i;
    float x;
    for (i = 0; i < 16; i++)
        tab[i] = i+1;

    printf("entrer un entier compris entre 1 et 16\n");
    scanf("%f", &x);

    float* res = search_dicho(x, &tab[0], 16);
    
    if (res != NULL)
        printf("l'entier à été trouver a la position memoire: %p\n", res);
    
    else 
        printf("l'entier n'as pas été trouver\n");
}

