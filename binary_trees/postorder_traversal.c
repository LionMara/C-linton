#include "binary_tree.h"

/**
 * postorder_traversal -traverse binary tree post order
 *
 * return: void
 */

void postorder_traversal(struct node *root)
{
	if (root == NULL)
	{
		return;
	}
	postorder_traversal(root->left);
	postorder_traversal(root->right);
	printf("%d ->", root->item);
}
