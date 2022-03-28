#include <stdio.h>

extern char **environ;

int nvar() {
    int c = 0;
    while (*environ != (char *) 0) {
        c ++;
        environ = environ + 1;
    }
    return c;
}


int main(void) {
    int res = nvar();
    printf("Le nombre de variables d'environnement est %d\n",res);
    return 0;
}

