#include "binary_tree.h"

/**
 * preorder_traversal - preorder traverse of bt
 *
 * return: void
 */

void preorder_traversal(struct node *root)
{
	if (root == NULL)
	{
		return;
	}
	printf("%d ->", root->item);
	preorder_traversal(root->left);
	preorder_traversal(root->right);
}
