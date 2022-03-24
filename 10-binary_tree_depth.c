#include "binary_trees.h"

/**
 * binary_tree_height - it is a function to create node
 * @tree: pointer to the parent node
 *
 * Return: the height of a tree
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL || tree->parent == NULL)
		return (0);

	return (binary_tree_depth(tree->parent) + 1);
}
