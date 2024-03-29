#include "binary_trees.h"
/**
 * binary_tree_sibling - get the sibling of a node
 * @node: pointer to the node
 *
 * Return: node's sibling, NULL if not found
 * or parent is NULL.
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);

	if (node == node->parent->left)
		return (node->parent->right);
	if (node == node->parent->right)
		return (node->parent->left);
	else
		return (NULL);
}
