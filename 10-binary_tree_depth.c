#include "binary_trees.h"

/**
 * binary_tree_depth - Depth of a binary tree node measured.
 * @tree: Pointer to the root node of the measured tree.
 *
 * Return: 0 if tree is NULL. Otherwise return depth.
 */

size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
