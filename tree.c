#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdarg.h>
#include "tree.h"

Node* create_node(const char* label, int num_children, ...) {
    Node* node = malloc(sizeof(Node));
    node->label = strdup(label);
    node->num_children = num_children;
    node->children = malloc(sizeof(Node*) * num_children);

    va_list args;
    va_start(args, num_children);
    for (int i = 0; i < num_children; i++) {
        node->children[i] = va_arg(args, Node*);
    }
    va_end(args);

    return node;
}

#include <stdbool.h>

void print_tree_ascii(Node* node, const char* prefix, int is_last) {
    printf("%s", prefix);
    printf("%s", is_last ? "`-- " : "|-- ");
    printf("%s\n", node->label);

    char new_prefix[1024];
    snprintf(new_prefix, sizeof(new_prefix), "%s%s", prefix, is_last ? "    " : "|   ");

    for (int i = 0; i < node->num_children; i++) {
        print_tree_ascii(node->children[i], new_prefix, i == node->num_children - 1);
    }
}

void print_tree(Node* node, int unused) {
    printf("[ROOT] %s\n", node->label);
    for (int i = 0; i < node->num_children; i++) {
        print_tree_ascii(node->children[i], "", i == node->num_children - 1);
    }
}

