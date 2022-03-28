#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "iififo.h"

struct ififo_s *ififo_new(){
    struct ififo_s *ififo = malloc(sizeof(struct ififo_s));
    ififo->head = NULL;
    ififo->tail = NULL;
    ififo->nb_nodes = 0;
    return ififo;
}


int ififo_is_empty(struct ififo_s *f){
    int res = 1;
    if(f->head == NULL && f->tail==NULL){
        res = 0;
    }
    return res;
}


int ififo_enqueue(struct ififo_s *f, int i) {
    struct ififo_node_s *new_node = malloc(sizeof(struct ififo_node_s));
    if(!new_node)
        return -1;
    new_node->value = i;
    new_node->next = NULL;
    f->nb_nodes = f->nb_nodes + 1;
    if(f-> nb_nodes > 1)
        f->tail->next = new_node;
    else
        f->head = new_node;
    f->tail = new_node;
    
    return 0;
}



int ififo_dequeue(struct ififo_s *f, int *i) {
    struct ififo_node_s *element_popped;
    if(f->nb_nodes == 0)
        return -1;
    element_popped = f->head;
    *i = element_popped->value;
    f->nb_nodes = f->nb_nodes - 1;
    f->head = element_popped->next;
    if(!f->nb_nodes)
        f->tail = NULL; 
    free(element_popped);
    return 0;
}


int ififo_head(const struct ififo_s *f) {
    assert(f->nb_nodes > 0);
    return f->head->value;
}


int ififo_apply(struct ififo_s *f, func_t *fn) {
    struct ififo_node_s *nextNode;
    for(nextNode = f->head; nextNode; nextNode = nextNode->next)
        fn(nextNode->value);
    return 0;
}


void ififo_del(struct ififo_s *f) {
    struct ififo_node_s *oldHead;
    if(!f->head) {
        free(f);
        return ;
    }
    oldHead = f->head;
    f->head = oldHead->next;
    free(oldHead);
    ififo_del(f);
}







void
print_int(int i)
{
    printf("%d←", i);
}

void
test_fifo_int()
{
    struct ififo_s *fifo;
    int i;

    fifo = ififo_new();

    ififo_enqueue(fifo, 12);   /* → 12 → */
    ififo_enqueue(fifo, 13);   /* → 13 → 12 → */

    ififo_apply(fifo, print_int); putchar('\n');

    ififo_enqueue(fifo, 14);   /* → 14 → 13 → 12 → */
    ififo_dequeue(fifo, &i);   /* 12 & → 14 → 13 → */

    printf("%d \n", i);
    ififo_apply(fifo, print_int); putchar('\n');

    ififo_dequeue(fifo, &i);   /* 13 & → 14 → */
    ififo_dequeue(fifo, &i);   /* 14 & → → */
    ififo_apply(fifo, print_int); putchar('\n');

    ififo_del(fifo);
}

int main(void) {
    test_fifo_int();

    return 0;
}

