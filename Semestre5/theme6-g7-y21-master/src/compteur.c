
#include <stdio.h>
#include <stdlib.h>


int compteur(){
  static int cpt = 0;
  return cpt++;
}

int main(){
  int i;
  for(i=0;i<10;i++){
    printf("cpt : %d\n",compteur());
  }
}
