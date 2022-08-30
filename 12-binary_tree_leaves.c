#include "binary_trees.h"

/**
 * binary_tree_leaves - Gets the number of leaves of a binary tree
 * @tree: Pointer to the tree
 * Return: Number of leaves (0 is empty)
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t right_count = 0, left_count = 0;

	if (!tree)
		return (0);

	right_count = binary_tree_leaves(tree->right);
	left_count = binary_tree_leaves(tree->left);

	if (tree->right == NULL && tree->left == NULL)
		return (1);

	return (right_count + left_count);

}
