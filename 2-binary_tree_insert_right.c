#include "binary_trees.h"
/**
 * binary_tree_insert_left - insert right node
 *
 * @parent: parent of the node
 * @value: value to be stored by the node
 *
 * Return: newly inserted node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
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

	if (parent->right == NULL)
	{
		parent->right = node;
		node->parent = parent;
	}
	else
	{
		parent->right->parent = node;
		node->right = parent->right;
		node->parent = parent;
		parent->right = node;
	}

	return (node);
}
