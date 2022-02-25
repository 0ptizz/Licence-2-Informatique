#include "mcu_readl.h"
#include "mcu_fatal.h"
#include <stdio.h>


int readl(char line[]){
    int i, c = 0;
    while ((c = getchar()) != EOF){
        line[i] = c;
        fatal(i+1 > MAXLINE, "Trop grand  \n", 1);
        if (c == '\n'){
            line[i+1] = '\0';
            return i;
        }
        i++;
    }
    line[i] = '\0';
    return EOF;
}
