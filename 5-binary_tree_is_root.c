#include "binary_trees.h"

/**
 * binary_tree_is_root - it is a function to create node
 * @node: pointer to the parent node
 *
 * Return: Value 1 is leaf o 0 if not
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	else
	{
		if (node->right != NULL && node->left != NULL)
		{
			return (1);
		}
		return (0);
	}
}
