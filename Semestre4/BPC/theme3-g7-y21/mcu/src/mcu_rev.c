#include "mcu_readl.h"
#include <stdio.h>


void line_rev(char line[],int size) {
    int i;
    i = size;
    while(i>=0) {
        putchar(line[i]);
        i--;
        }
    putchar('\n') ;
    }


int main (void)
{
    char line[MAXLINE];
    int c = readl(line);
    while(c!=EOF){
        line_rev(line,c);
        c = readl(line);
    }
    return 0;

}


