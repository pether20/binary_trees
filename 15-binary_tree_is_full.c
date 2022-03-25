#include "binary_trees.h"

/**
 * inary_tree_is_full - it is a function find height
 * @tree: pointer to the parent node
 *
 * Return: the full 1 or not 0
 */

int binary_tree_is_full(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);
	return (binary_tree_is_full(tree->left) &&
			binary_tree_is_full(tree->right));
}
