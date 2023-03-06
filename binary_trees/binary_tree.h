#ifndef BINARY_TREE_H
#define BINARY_TREE_H
/* Standard liobraries */
#include <stdio.h>
#include <stdlib.h>

/* struct for nodes */
struct node {
	int item;
	struct node *left;
	struct node *right;
};

/* create new node */
struct node *create_node(value);

/* insert nodes */
struct node *insert_left(struct node *root, int value);
struct node *insert_right(struct node *root, int value);

/* function prototypes */
void inorder_traversal(struct node *root);
void preorder_traversal(struct node *root);
void postorder_traversal(struct node *root);

#endif /* BINARY_TREE_H */
