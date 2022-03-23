#include "binary_trees.h"

/**
 * binary_tree_node - it is a function to create node
 * @parent: pointer to the parent node
 * @value: It is the value that the new node will receive
 *
 * Return: binary_tree_t*
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node_left = NULL;

	if (parent == NULL)
		return (NULL);

	node_left = binary_tree_node(parent, value);
	if (node_left != NULL)
	{
		if (parent->left != NULL)
		{
			node_left->left = parent->left;
			parent->left = node_left;
			node_left->left->parent = node_left;
		}
		parent->left = node_left;
		return (node_left);
	}

	return (NULL);
}
