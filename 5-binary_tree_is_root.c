#include "binary_trees.h"

/**
 * binary_tree_is_root - Node checked if root of a binary tree.
 * @node: Pointer to checked the node.
 *
 * Return: 1 if node is root. 0 otherwise.
 */

int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);

	return (1);
}
