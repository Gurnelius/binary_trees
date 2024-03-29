#include "binary_trees.h"
/**
 * binary_tree_is_full - checks whether a binary tree is full
 * is full or not.
 *
 * @tree: pointer to a the binary tree
 *
 * Return: 1 if full, 0 otherwise or tree is NULL
 */
int binary_tree_is_full(const binary_tree_t *tree)
{
	int left_full;
	int right_full;

	if (tree == NULL)
		return (0);

	if (tree->left == NULL && tree->right == NULL)
		return (1);

	if (tree->left != NULL && tree->right != NULL)
	{
		left_full = binary_tree_is_full(tree->left);
		right_full = binary_tree_is_full(tree->right);
		return (left_full && right_full);
	}

	return (0);
}
