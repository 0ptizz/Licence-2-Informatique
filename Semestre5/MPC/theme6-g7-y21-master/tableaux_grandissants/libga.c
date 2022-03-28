#include <stdio.h>
#include <stdlib.h>
#include "libga.h"

int
ga_set(struct ga_s *ga, unsigned int index, int val){
    if(index < ga->size){
    	*(ga->ga_elements+index) = val;
		return 0;
    }
    else{
		int *newArray;
		int i;
        newArray = malloc((index+1)*sizeof(int));
		if(newArray!=NULL){
			for(i =0; i< ga->size; i++){
				*(newArray + i) = *(ga->ga_elements+i);
			}
			*(newArray+index) = val;
			ga->size = index+1;
			free(ga->ga_elements);
			ga->ga_elements = newArray;
			return 0;
		}
		else {
			return -1;
		}
    }
}

int
ga_get(struct ga_s *ga, unsigned int index, int *val){
	if(index >= ga->size){
    	return -1;
    }
    else{
    	*val = *(ga->ga_elements+index);
		return 0;
    }
}

int 
ga_new(struct ga_s *ga){
	ga->size=0;
	ga->ga_elements = NULL;
	return 0;
}

int
ga_del(struct ga_s *ga){
	free((ga->ga_elements));
	return 0;
}

