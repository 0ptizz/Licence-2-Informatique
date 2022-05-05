#include "entropy.h"
#include <math.h>

void count_occurrences(FILE *file, int counts[]){
  char c;
  int j;
  for (int i=0;i < 256;i++){
    counts[i]=0;
  }
  while ((c=fgetc(file))!=EOF){
        j=c;
        counts[j]+=1;
  }
}

struct file_stat entropy(int counts[]){
  struct file_stat data;
  data.entropy = 0;
  data.size = 0;
  data.optimal = 0;
  float somme = 0;
  int i;
  for (i = 0; i < 256; i++) {
    if (counts[i] >= 1) {
      data.size += counts[i];
      somme += counts[i]*log2(counts[i]);
    }
  }

  float x = (double) 1/data.size;
  data.entropy = log2(data.size) - x * somme;

  data.optimal = ((8-data.entropy)/8)*100;

  return data;
}
