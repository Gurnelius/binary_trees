#include "binary_trees.h"
/**
 * binary_tree_leaves - count the leaves of a binary tree
 * @tree: Pointer to the root of the binary tree
 *
 * Return: number of leaves of the tree, 0 if tree is NULL
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t left_count = 0;
	size_t right_count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	left_count = binary_tree_leaves(tree->left);
	right_count = binary_tree_leaves(tree->right);

	return ((left_count + right_count));
}
