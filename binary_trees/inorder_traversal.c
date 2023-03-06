#include "binary_tree.h"

/**
 * inorder_traversal - traverse tree inorder
 *
 * return: 0
 */

void inorder_traversal(struct node *root)
{
	if (root == NULL)
	{
		return;
	}
	inorder_traversal(root->left);
	printf("%d ->", root->item);
	inorder_traversal(root->right);
}
