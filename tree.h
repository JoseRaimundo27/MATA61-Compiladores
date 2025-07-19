#ifndef TREE_H
#define TREE_H

typedef struct Node {
    char* label;
    struct Node** children;
    int num_children;
} Node;

Node* create_node(const char* label, int num_children, ...);
void print_tree(Node* node, int indent);

#endif
