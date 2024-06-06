#include "binary_trees.h"

/**
 * binary_tree_nodes - Nodes of binary trees counted with 1 child.
 * @tree: Pointer to the root node of the tree with counted nodes.
 *
 * Return: 0 if NULL, otherwise returns  node count.
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t counted_nodes = 0;

	if (tree)
	{
		counted_nodes += (tree->left || tree->right) ? 1 : 0;
		counted_nodes += binary_tree_nodes(tree->left);
		counted_nodes += binary_tree_nodes(tree->right);
	}
	return (counted_nodes);
}
