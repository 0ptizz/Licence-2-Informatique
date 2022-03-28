#ifndef IIFIFO
#define IIFIFO

struct ififo_node_s {
    int value;
    struct ififo_node_s *next;
};

struct ififo_s {
    struct ififo_node_s *head;
    struct ififo_node_s *tail;
    unsigned int nb_nodes;
};

typedef void (func_t)(int);

struct ififo_s *ififo_new();
int ififo_is_empty(struct ififo_s *f);
int ififo_enqueue(struct ififo_s *, int);
int ififo_dequeue(struct ififo_s *, int *);
int ififo_head(const struct ififo_s *);
int ififo_apply(struct ififo_s *f, func_t *fn);
void ififo_del(struct ififo_s *f);

#endif

