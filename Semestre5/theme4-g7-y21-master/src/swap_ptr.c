#include <stdio.h>
#include <stdlib.h>

void swap_ptr(int** a, int** b){
    int* c = *a;
    *a = *b;
    *b = c;
}

int main() {
    
    int a, b;
    int *p = &a;
    int *q = &b;
    
    swap_ptr(&p, &q);
    
    if ((p == &b) && (q == &a)) {
        printf("OK ;)\n");
        exit(EXIT_SUCCESS);
    } else {
        printf("KO ;(\n");
        exit(EXIT_FAILURE);
    }
}
