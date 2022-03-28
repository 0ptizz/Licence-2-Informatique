#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
 
void nomtemp(char *nomTemp, int size)
{
    int i, sizechar = 0;
    char chaine[] = "abcdefghijklmnpqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ1234567890&[](){}/\\-_*";
    sizechar = strlen(chaine);
    srand(time(NULL));
    for(i=0; i != size; i++){
        nomTemp[i] = chaine[rand()%sizechar];
    }
    nomTemp[size - 1] = '\0';
    printf("%s\n", nomTemp);
}
 
char main(){
    char t[10];
    nomtemp(t, 10);
}