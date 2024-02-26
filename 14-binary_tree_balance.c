#include "binary_trees.h"
#include "9-binary_tree_height.c"
/**
 * binary_tree_balance - calculate the balance factor of a binary tree
 * @tree: Pointer to the root of the binary tree
 *
 * Return: balance factor, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left = 0;
	int height_right = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		height_left = binary_tree_balance(tree->left) + 1;
	if (tree->right != NULL)
		height_right = binary_tree_balance(tree->right) + 1;

	return (height_left - height_right);

	return (0);
}
