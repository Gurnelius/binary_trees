#include "binary_trees.h"
/**
 * binary_tree_postorder - traverse a binary tree using
 * postorder traversal (left, right, root)
 *
 * @tree: pointer to the root node of the binary tree
 * @func: pointer to a function to call for each node.
 *
 * Return: nothing
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_postorder(tree->left, func);
	binary_tree_postorder(tree->right, func);
	func(tree->n);
}
