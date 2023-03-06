#include "binary_tree.h"

/**
 * struct insert_left - inserts to left
 *
 * return: left child
 */
struct node *insert_left(struct node *root, int value)
{
	root->left = create_node(value);
	return root->left;
}

/**
 * struct insert_right - inserts to right
 *
 * return: right child
 */
struct node *insert_right(struct node *root, int value)
{
	root->right = create_node(value);
	return root->right;
}
