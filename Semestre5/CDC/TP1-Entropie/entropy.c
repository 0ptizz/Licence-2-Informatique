#include<stdio.h>
#include<stdlib.h>
#include <math.h>

#include "lib/entropy.h"

int main(int argc, char **argv) {

  if (argc <= 1) {
    fprintf(stderr, "Usage: %s <filename>\n", argv[0]);
    exit(1);
  }

  FILE *file = fopen(argv[1], "r");

  int counts[256];
  int i;
  for (i = 0; i < 256; i++) {
    counts[i] = 0;
  }

  count_occurrences(file,counts);

  struct file_stat res;

  res = entropy(counts);

  printf("Le fichier fait %d octets et a une entropie de %f bits par octet\n",res.size,res.entropy);
  printf("Au mieux un codage optimal améliorerait le stockage de ce fichier de %d %c.\n",res.optimal,37);

  fclose(file);
  exit(0);
}


/*
void count_occurrences(FILE *file, int counts[]){
  fopen("test.txt",r);
  couts[256];
  int c;
  for (int i=0;i < 256,i++){
    counts[i]=0;
    while ((c=fgetc(file))!=EOF){
      if (c==i){
        counts[i]+=1;
      }
    }
    fclose(file);
  }
}*/
