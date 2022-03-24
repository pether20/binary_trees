#include "binary_trees.h"

/**
 * binary_tree_leaves - it is a function find leaves
 * @tree: pointer to the parent node
 *
 * Return: the leaves of a tree
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_height = binary_tree_leaves(tree->left);
	right_height = binary_tree_leaves(tree->right);

	return (left_height + right_height);
}
