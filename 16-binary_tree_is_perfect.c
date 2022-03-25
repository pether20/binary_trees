#include "binary_trees.h"

/**
 * binary_tree_is_perfect - it is a function find height
 * @tree: pointer to the parent node
 *
 * Return: the full 1 or not 0
 */

int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int left_tree = 0, right_tree = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_tree = binary_tree_size(tree->left);
	right_tree = binary_tree_size(tree->right);

	if ((binary_tree_height(tree)) && (left_tree == right_tree))
		return (0);

	return (0);
}

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
