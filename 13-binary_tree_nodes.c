#include "binary_trees.h"
/**
 * binary_tree_nodes - count nodes with at least
 * 1 child in a binary tree
 * @tree: Pointer to the root of the binary tree
 *
 * Return: number of nodes with at least 1 child
 * in a tree, 0 if tree is NULL
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	if (tree->left != NULL || tree->right != NULL)
		return (binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1);
	return (0);
}
