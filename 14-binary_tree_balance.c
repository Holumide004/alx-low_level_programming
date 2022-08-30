#include "binary_trees.h"

/**
 * binary_tree_balance - Checks the balance of a binary tree
 * @tree: Pointer to the tree
 * Return: Balance of the binary tree
 */

int binary_tree_balance(const binary_tree_t *tree)
{
	int left_count = 0, right_count = 0;

	if (tree == NULL)
		return (0);

	if (tree->left != NULL)
		left_count = binary_tree_height_2(tree->left);
	if (tree->right != NULL)
		right_count = binary_tree_height_2(tree->right);

	return (left_count - right_count);
}


/**
 * binary_tree_height_2 - Gets the tree height in a binary tree
 * @tree: Pointer to the tree
 * Return: Height
 */

size_t binary_tree_height_2(const binary_tree_t *tree)
{
	size_t left_count = 0, right_count = 0;

	if (tree->left)
		left_count = binary_tree_height_2(tree->left);

	if (tree->right)
		right_count = binary_tree_height_2(tree->right);

	if (right_count > left_count)
		return (right_count + 1);
	return (left_count + 1);
}
