#include<stdio.h>



float * search_interval(float v, float *tab, float *end){
    float *middle = tab + (end-tab)/2;
    if (end < tab){
        return NULL;
    }

    if (*middle < v){
        return middle;
    }

    if (*middle == v){
    return middle;
    }

    if (*middle < v){
    return search_interval(v,tab,middle -1);
    }

    else {
    return search_interval(v,middle+1,end);
    }
}

void main(){
    float tab[16];
    int i;
    float x;
    for (i = 0; i < 16; i++)
        tab[i] = i+1;

    printf("entrer un entier compris entre 1 et 16\n");
    scanf("%f", &x);

    float* res = search_interval(x, tab, tab+16);

    
    if (res != NULL)
        printf("l'entier à été trouver a la position memoire: %p\n", res);
    
    else 
        printf("l'entier n'as pas été trouver\n");
}

