#include "binary_trees.h"

/**
 * binary_tree_insert_left - left child node inserted in other binary tree node
 * @parent: Points to node where left-child is inserted.
 * @value: Integer value stores in new node.
 *
 * Return: Pointer to the newly created node, or NULL if allocation fails.
 *
 * Description: New node replaces the left child node, old node becomes left
 * child of the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
		return (NULL);

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
		return (NULL);

	if (parent->left != NULL)
	{
		new_node->left = parent->left;
		parent->left->parent = new_node;
	}
	parent->left = new_node;

	return (new_node);
}
