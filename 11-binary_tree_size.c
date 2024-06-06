#include "binary_trees.h"

/**
 * binary_tree_size - Size of the binary tree measured.
 * @tree: Pointer to the root node of the measured tree.
 *
 * Return: Measurement of the tree.
 */

size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t dimensions = 0;

	if (tree)
	{
		dimensions += 1;
		dimensions += binary_tree_size(tree->left);
		dimensions += binary_tree_size(tree->right);
	}
	return (dimensions);
}
