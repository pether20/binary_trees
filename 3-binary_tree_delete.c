#include "binary_trees.h"

/**
 * binary_tree_insert_left - it is a function to create node
 * @parent: pointer to the parent node
 * @value: It is the value that the new node will receive
 *
 * Return: binary_tree_t*
 */

void binary_tree_delete(binary_tree_t *tree)
{
	if (tree != NULL)
	{
		if (tree->right != NULL || tree->left != NULL)
		{
			binary_tree_delete(tree->right);
			binary_tree_delete(tree->left);
		}
		free(tree);
	}
}
