#include <stdio.h>

int wl() {
    int c;
    int i = 0;
    while ((c = getchar()) != EOF) {
        if (c == '\n') i++;
    }
    return i;
}

int main() {
    int n = wl();
    printf("%i\n", n);
    return 0;
}
