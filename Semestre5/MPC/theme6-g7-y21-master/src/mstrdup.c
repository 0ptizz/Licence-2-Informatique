#include <stdio.h>
#include <string.h>
#include <stdlib.h>

char *mstrdup(const char *str){
    int size;
    int i;
    size = (int)strlen(str)+1;
    
    char *dest = malloc(sizeof(char)*size);
    for(i=0; i <size ; i++){
        dest[i] = str[i];
    }
    
    return dest;
}

int main(int argc, char **argv){
    char* copy ;
    for(int i =0 ; i < argc; i++){
        copy = mstrdup((char*) argv[i]);
        printf("%s \n",copy);
        free(copy);
    }
   return 0;
}
