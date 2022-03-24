#include "binary_trees.h"

/**
 * binary_tree_size - it is a function find height
 * @tree: pointer to the parent node
 *
 * Return: the height of a tree
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (1);

		left_height = binary_tree_size(tree->left);
		right_height = binary_tree_size(tree->right);

		return (left_height + right_height + 1);
	}
	return (0);
}
