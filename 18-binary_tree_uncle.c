#include "binary_trees.h"
/**
 * binary_tree_uncle - get the uncle of a node
 * @node: pointer to the node
 *
 * Return: node' uncle, NULL if not found
 * or parent is NULL.
 */
binary_tree_t *binary_tree_uncle(binary_tree_t *node)
{
	binary_tree_t *parent;

	if (node == NULL || node->parent == NULL)
		return (NULL);
	parent = node->parent;

	if (parent->parent != NULL)
	{
		if (parent == parent->parent->left)
			return (parent->parent->right);
		if (parent == parent->parent->right)
			return (parent->parent->left);
		else
			return (NULL);
	}
	else
		return (NULL);
}
