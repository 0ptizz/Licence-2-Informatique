#ifndef GFIFO
#define GFIFO

struct gfifo_node_s {           /* une cellule de la liste chaînée */
    void *value;
    struct gfifo_node_s *next;
};
struct gfifo_s {                /* une file */
    struct gfifo_node_s *head;
    struct gfifo_node_s *tail;
    unsigned int nb_nodes;
};

struct gfifo_s *gfifo_new();
int gfifo_del(struct gfifo_s *f);

int gfifo_size(struct gfifo_s *f);
int gfifo_is_empty(struct gfifo_s *f);

int gfifo_enqueue(struct gfifo_s *f, void *p);
int gfifo_dequeue(struct gfifo_s *f, void **p);

typedef void (gfunc_t)(void *);
int gfifo_apply(struct gfifo_s *f, gfunc_t *fn);


#endif
