#include "binary_trees.h"

/**
 * binary_tree_insert_left - it is a function to create node
 * @parent: pointer to the parent node
 * @value: It is the value that the new node will receive
 *
 * Return: binary_tree_t*
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *node_r = NULL;

	if (parent == NULL)
		return (NULL);

	node_r = binary_tree_node(parent, value);
	if (node_r != NULL)
	{
		if (parent->right != NULL)
		{
			node_r->right = parent->right;
			parent->right = node_r;
			node_r->right->parent = node_r;
		}
		parent->right = node_r;
		return (node_r);
	}

	return (NULL);
}
