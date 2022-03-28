#include <stdlib.h>
#include <stdio.h>
#include <assert.h>


struct ififo_s * ififo_merge(struct ififo_s *f1, struct ififo_s *f2) {
    struct ififo_s *new_ififo = ififo_new();
    struct ififo_s *only_not_empty_ififo;
    int i;
    
    while(!ififo_is_empty(f1) || ! ififo_is_empty(f2)) {
        
        if(!ififo_is_empty(f1) && !ififo_is_empty(f2)) {
            
            if(ififo_head(f1) <= ififo_head(f2))
                ififo_dequeue(f1, &i);
            
            else
                ififo_dequeue(f2, &i);
            
            ififo_enqueue(new_ififo, i);
        }
        
        else {
            if(ififo_is_empty(f2))
                only_not_empty_ififo = f1;
            
            else
                only_not_empty_ififo = f2;
            
            while(!ififo_is_empty(only_not_empty_ififo)) {
                ififo_dequeue(only_not_empty_ififo, &i);
                ififo_enqueue(new_ififo, i);
            }
        }
    }

    return new_ififo;
}


void ififo_sort(struct gfifo_s *gfifo) {
    struct ififo_s *ififo1;
    struct ififo_s *ififo2;
    struct ififo_s *merged_ififo;

    while(gfifo_size(gfifo) >= 2) {
        gfifo_dequeue(gfifo, (void **) &ififo1);
        gfifo_dequeue(gfifo, (void **) &ififo2);

        merged_ififo = ififo_merge(ififo1, ififo2);
        gfifo_enqueue(gfifo, (void *) merged_ififo);
        
        ififo_del(ififo1);
        ififo_del(ififo2);
    }
}
