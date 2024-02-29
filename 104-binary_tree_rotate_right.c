#include "binary_trees.h"
/**
 * binary_tree_rotate_right - performs a right-rotation
 * on a binary tree
 *
 * @tree: pointer to the root node of the tree
 *
 * Return: pointer to the new root node.
 */
binary_tree_t *binary_tree_rotate_right(binary_tree_t *tree)
{
	binary_tree_t *new_root;

	if (tree == NULL)
		return (NULL);
	if (tree->left == NULL)
		return (tree);

	new_root = tree->left;
	tree->left = tree->left->right;

	if (new_root->right != NULL)
		new_root->right->parent = tree;

	tree->parent = new_root;
	new_root->right = tree;

	if (new_root->right != NULL)
		new_root->right->parent = tree;
	tree = new_root;

	return (tree);
}
