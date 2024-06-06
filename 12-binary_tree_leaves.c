#include "binary_trees.h"

/**
 * binary_tree_leaves - Leaves in a binary tree counted.
 * @tree: Pointer to the root node of the tree with counted leaves.
 *
 * Return: Counted leaves in the tree.
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t counted_leaves = 0;

	if (tree)
	{
		counted_leaves += (!tree->left && !tree->right) ? 1 : 0;
		counted_leaves += binary_tree_leaves(tree->left);
		counted_leaves += binary_tree_leaves(tree->right);
	}
	return (counted_leaves);
}
