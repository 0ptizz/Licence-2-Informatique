#include <stdio.h>

void swap_int(int* a, int* b){
    int c = *a;
    *a = *b;
    *b = c;
}

int main(void) {
    int x, y;

    printf("Entrez l'entier X: ");
    scanf("%d", &x);
    printf("Entrez l'entier Y: ");
    scanf("%d", &y);
    swap_int(&x, &y);
    printf("valeur des variable aprés echange:\n\tx = %d\n\ty = %d\n", x, y);

    return 0;
}
