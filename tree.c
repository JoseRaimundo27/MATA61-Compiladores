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

void print_tree(Node* node, int indent) {
    if (strcmp(node->label, "statement_list") == 0) {
        for (int i = 0; i < node->num_children; i++) {
            print_tree(node->children[i], indent); // sem aumentar indent
        }
    } else {
        for (int i = 0; i < indent; i++) printf("  ");
        printf("%s\n", node->label);
        for (int i = 0; i < node->num_children; i++) {
            print_tree(node->children[i], indent + 1);
        }
    }
}

