#include "binary_trees.h"
/**
 * binary_tree_node - Create a node of a binary tree and link it
 * to its parent.
 *
 * @parent: parent to the node
 * @value: the value to be stored by the node
 * Return: newly created node
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->parent = parent;
	node->n = value;

	return (node);
}
