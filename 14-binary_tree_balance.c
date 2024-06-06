#include "binary_trees.h"

/**
 * binary_tree_balance - Balance factor of a binary tree measured.
 * @tree: Pointer to the root node of the measured tree.
 *
 * Return: 0 if NULL, otherwise return balance factor.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));

	return (0);
}

/**
 * binary_tree_height - Height of a binary tree node measured.
 * @tree: Pointer to the root node of the measured tree.
 *
 * Return: 0 if tree is NULL. Otherwise return height.
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left_side = 0, right_side = 0;

		left_side = tree->left ? 1 + binary_tree_height(tree->left) : 0;
		right_side = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		return ((left_side > right_side) ? left_side : right_side);
	}
	return (0);
}
