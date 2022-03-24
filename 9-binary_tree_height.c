#include "binary_trees.h"

/**
 * binary_tree_height - it is a function find height
 * @tree: pointer to the parent node
 *
 * Return: the height of a tree
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height, right_height;

	if (tree != NULL)
	{
		if (tree->left == NULL && tree->right == NULL)
			return (0);

		left_height = binary_tree_height(tree->left);
		right_height = binary_tree_height(tree->right);

		return (max(left_height, right_height) + 1);
	}
	return (0);
}

/**
 * max - function max value
 *
 * @num1: value
 * @num2: value
 * Return: int
 */

int max(int num1, int num2)
{
	if (num1 > num2)
		return (num1);
	else
		return (num2);
}
