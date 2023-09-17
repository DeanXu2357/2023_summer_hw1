struct avl_node {
    int height;
    struct avl_node *left;
    struct avl_node *right;
};

struct avl_root {
    struct avl_node *node;
};

# define avl_root(r) (r->node)
