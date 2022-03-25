#include "binary_trees.h"

/**
 * binary_tree_balance - it is a function find height
 * @tree: pointer to the parent node
 *
 * Return: the height of a tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree != NULL)
	{
		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);
		return (left_height - right_height);
	}
	return (0);
}

/**
 * binary_tree_height - it is a function find height
 * @tree: pointer to the parent node
 *
 * Return: the height of a tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree == NULL)
		return (0);

	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	if (left_height > right_height)
		return (left_height + 1);
	else
		return (right_height + 1);
}
