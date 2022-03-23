#include "binary_trees.h"

/**
 * binary_tree_delete - it is a function to create node
 * @tree: pointer to the parent node
 *
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node != NULL)
	{
		if (node->right != NULL || node->left != NULL)
		{
			return (0);
		}
		else
			return (1);
	}
	return (0);
}
