#include "binary_trees.h"

/**
 * binary_tree_preorder - it is a function to create node
 * @tree: pointer to the parent node
 * @func: pointer to function print value of node
 *
 */

void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree == NULL || func == NULL)
		return;
	func(tree->n);
	binary_tree_preorder(tree->left, func);
	binary_tree_preorder(tree->right, func);
}
