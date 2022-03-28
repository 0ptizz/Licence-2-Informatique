#include <stdlib.h>             /* pour random() */
#include <string.h>             /* pour memcmp() */
#include <assert.h>             /* pour assert() */
#include <stdio.h>
#define SIZE    1021



void memswap(void *to, const void *from, unsigned int size){
    int i = 0 ;
    char *src = (char *)from;
    char *dest = (char *)to;
    char t;
    for(i;i<size;i++){
        t = *(dest+i);
        *(dest+i) = *(src+i);
        *(src+i) = t;
    }
}

int main(){
    char t[] = "test";
    char t2[] = "TEST";
    printf("Before swap : %s-%s\n", t, t2);
    memswap(t, t2, sizeof(t2));
    printf("After swap  : %s-%s\n", t, t2);
    return 0;
}

