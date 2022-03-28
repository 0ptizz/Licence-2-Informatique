#include <stdlib.h>
#include <stdio.h>
#include <assert.h>
#include "gfifo.h"

struct gfifo_s *gfifo_new() {
    struct gfifo_s *gfifo = malloc(sizeof(struct gfifo_s));
    gfifo->head = NULL;
    gfifo->tail = NULL;
    gfifo->nb_nodes = 0;
    return gfifo;
}

int gfifo_is_empty(struct gfifo_s *f) {
    int res = 1;
    if(f->head == NULL && f->tail==NULL){
        res = 0;
    }
    return res;
}

int gfifo_del(struct gfifo_s *f) {
    struct gfifo_node_s *oldHead;
    if(!f->head) {
        free(f);
        return 0;
    }
    oldHead = f->head;
    f->head = oldHead->next;
    free(oldHead);
    gfifo_del(f);

    return 0;
}

int gfifo_size(struct gfifo_s *f) {
    return f->nb_nodes;
}

int gfifo_enqueue(struct gfifo_s *f, void *p) {
    struct gfifo_node_s *new_node = malloc(sizeof(struct gfifo_node_s));
    if(!new_node)
        return -1;
    new_node->value = p;
    new_node->next = NULL;
    f->nb_nodes = f->nb_nodes + 1;
    if(f-> nb_nodes > 1)
        f->tail->next = new_node;
    else
        f->head = new_node;
    f->tail = new_node;

    return 0;
}

int gfifo_dequeue(struct gfifo_s *f, void **p) {
    struct gfifo_node_s *element_popped;
    if(f->nb_nodes == 0)
        return -1;
    element_popped = f->head;
    *p = element_popped->value;
    f->nb_nodes = f->nb_nodes - 1;
    f->head = element_popped->next;
    if(!f->nb_nodes)
        f->tail = NULL;
    free(element_popped);
    return 0;
}

int gfifo_apply(struct gfifo_s *f, gfunc_t *fn) {
    struct gfifo_node_s *nextNode;
    for(nextNode = f->head; nextNode; nextNode = nextNode->next)
        fn(nextNode->value);
    return 0;
}




void
print_int(void *elt)
{
    printf("%d←", *((int *) elt));
}

void
test_gfifo_int()
{
    struct gfifo_s *fifo;
    void *i;
    int var1 = 12;
    int var2 = 13;
    int var3 = 14;

    fifo = gfifo_new();

    gfifo_enqueue(fifo, (void *) &var1);   /* → 12 → */
    gfifo_enqueue(fifo, (void *) &var2);   /* → 13 → 12 → */

    gfifo_apply(fifo, print_int); putchar('\n');

    gfifo_enqueue(fifo, (void *) &var3);   /* → 14 → 13 → 12 → */
    gfifo_dequeue(fifo, &i);   /* 12 & → 14 → 13 → */

    printf("%d \n", *((int *) i));
    gfifo_apply(fifo, print_int); putchar('\n');

    gfifo_dequeue(fifo, &i);   /* 13 & → 14 → */
    gfifo_dequeue(fifo, &i);   /* 14 & → → */
    gfifo_apply(fifo, print_int); putchar('\n');

    gfifo_del(fifo);
}

int main(void) {
    test_gfifo_int();

    return 0;
}
