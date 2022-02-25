extern int putchar(int);
#include <stdio.h>
int foo(int x) {
    int a = putchar(x);
    return 42;
}

float square(float x) {
    return x*x;
}

int is_within_distance(float x1, float y1, float x2, float y2, float dist) {
    if ((square(x1-x2) + square(y1-y2)) < square(dist))
                return 1;
        return 0;
}

int main() {
    int b = foo(65); /*65 est le code ascii de A*/
    printf("\n%f\n",square(10));
    printf("%d\n",is_within_distance(10,15,13,12,20));
    printf("%d\n",is_within_distance(10,15,13,12,3));
}
