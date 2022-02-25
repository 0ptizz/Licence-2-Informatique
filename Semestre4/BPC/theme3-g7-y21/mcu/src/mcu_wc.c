#include <stdio.h>

int wc() {
    int i = 0;
    while (getchar() != EOF) {
        i++;
    }
    return i;
}

int main() {
    int n = wc();
    printf("%i\n", n);
    return 0;
}
