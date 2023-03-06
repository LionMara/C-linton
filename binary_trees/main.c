#include "binary_tree.h"

/**
 * main -  main functio
 *
 * return: 0
 */

int main()
{
	struct node *root = create_node(1);
	insert_left(root, 12);
	insert_right(root, 9);

	insert_left(root->left, 5);
	insert_right(root->left, 6);

	printf("Inorder traversal \n");
	inorder_traversal(root);

	printf("\n Preorder Traversal \n");
	preorder_traversal(root);

	printf("\n Postorder traversal \n");
	postorder_traversal(root);

	return (0);
}
