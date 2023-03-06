#include "binary_tree.h"

/**
 * create_node- creates node
 *
 * return: new_node
 */

struct node *create_node(value) {
	struct node *new_node = malloc(sizeof(struct node));
	new_node->item = value;
	new_node->left = NULL;
	new_node->right =NULL;

	return new_node;
}
