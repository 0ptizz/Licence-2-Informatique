#include <stdio.h>
extern char **environ;

void mprintenv() {
    while (*environ != (char *) 0) {
        printf("%s\n",*environ);
        environ = environ + 1;
    }
}

int main(void) {
    mprintenv();
    return 0;
}
