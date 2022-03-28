#include <stdio.h>
#include <stdlib.h>



void filter_int(int *dest, int *from, unsigned int size,int (*f)(int)){

    int i = 0 ;
    int j = 0 ;
    
    
    for(i;i<size;i++){
        if((*f)(*(from+i))!=0){
            *(dest+j) = *(from+i);
            j++;
        }  
    }
}

int filter(int a){
    return a%2 == 0;
}

int main()
{
    int i;
    int t[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11};
    int n = sizeof(t) / sizeof(t[0]);
    
    printf("\nBefore filter : ");
    for (i = 0; i < n; i++){
        printf("%d ", t[i]);
    }
    printf("\n");

    int t2[n];
    
    for (i = 0; i < n; i++){
        t2[i] = 1;
    }
    filter_int(t2, t, 11, filter);
    printf("\nAfter Filter : ");
    
    
    for (i = 0; i < n; i++){
        printf("%d ", t2[i]);
    }
    printf("\n");

    return 0;
}
