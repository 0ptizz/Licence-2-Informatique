#include "mcu_fatal.h"
#include <stdio.h>
#include <stdlib.h>

void fatal(int assert, const char message [], int status){
    int i;
    if (!assert) return;
    for (i = 0; message[i] != '\0'; i++)
        putchar(message[i]);
    putchar('\n');
    exit(status);
}


