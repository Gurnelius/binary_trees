#include "binary_trees.h"
/**
 * max - get largest number
 * @a: first number
 * @b: second number
 *
 * Return: largest of the two numbers
 */
int max(int a, int b)
{
	return ((a > b) ? a : b);
}
/**
 * binary_tree_height - measure the height of a binary tree
 * @tree: Pointer to the root of the binary tree
 *
 * Return: height of the tree, 0 if tree is NULL
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	int left_height;
	int right_height;

	if (tree == NULL)
		return (0);
	left_height = binary_tree_height(tree->left);
	right_height = binary_tree_height(tree->right);
	return (1 + max(left_height, right_height));
}
/**
 * binary_tree_balance - calculate the balance factor of a binary tree
 * @tree: Pointer to the root of the binary tree
 *
 * Return: balance factor, 0 if tree is NULL
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	int height_left;
	int height_right;

	if (tree == NULL)
		return (0);

	height_left = binary_tree_height(tree->left);
	height_right = binary_tree_height(tree->right);

	return (height_left - height_right);
}
