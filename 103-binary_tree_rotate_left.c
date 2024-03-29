#include "binary_trees.h"
/**
 * binary_tree_rotate_left - performs a left-rotation
 * on a binary tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: pointer to the new root node.
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (tree == NULL)
		return (NULL);
	if (tree->right == NULL)
		return (tree);

	new_root = tree->right;
	tree->parent = new_root;
	tree->right = new_root->left;
	new_root->left = tree;

	tree = new_root;

	return (tree);
}
