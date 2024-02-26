#include "binary_trees.h"
/**
 * binary_tree_is_root - check if a node is
 * the root of the tree
 *
 * @node: the node to be checked.
 *
 * Return: 1 if node is root, 0 otherwise or
 * if node is NULL.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
		return (0);
	if (node->parent == NULL)
		return (1);
	else
		return (0);
}
