#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert left node
 *
 * @parent: parent of the node
 * @value: value to be stored by the node
 *
 * Return: newly inserted node
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *node;

	if (parent == NULL)
		return (NULL);

	node = malloc(sizeof(binary_tree_t));

	if (node == NULL)
	{
		free(node);
		return (NULL);
	}

	node->n = value;

	if (parent->left == NULL)
	{
		parent->left = node;
		node->parent = parent;
	}
	else
	{
		parent->left->parent = node;
		node->left = parent->left;
		node->parent = parent;
		parent->left = node;
	}

	return (node);
}
