#include <stdlib.h>
#include "binary_trees.h"

/**
 * binary_tree_node - it is a function to create node
 * @parent: pointer to the parent node
 * @value: It is the value that the new node will receive
 *
 * Return: binary_tree_t*
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node = malloc(sizeof(binary_tree_t));

	if (node != NULL)
	{
		node->parent = parent;
		node->n = value;
		node->left = NULL;
		node->right = NULL;
		return (node);
	}
	return (NULL);
}
