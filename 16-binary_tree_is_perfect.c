#include "binary_trees.h"
/**
 * binary_tree_is_perfect - checks whether a binary tree is
 * perfect or not.
 *
 * @tree: pointer to a the binary tree
 *
 * Return: 1 if perfect, 0 otherwise or tree is NULL
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	int is_full;

	if (tree == NULL)
		return (0);
	if (tree->left == NULL 
}
