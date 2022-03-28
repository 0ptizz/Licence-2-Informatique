#include <stdio.h>
#include "print_numbers.h"


void division(int diviseur, int dividende, int* q, int* r) {
    *q = dividende / diviseur;
    *r = dividende % diviseur;
} 


int main(void) {
    int q;
    int r;
    division(2, 12, &q, &r);
    printf("Quotient : ");
    putdec(q);
    printf(",Reste : ");
    putdec(r);
    putchar('\n');
    
    return 0;
}
