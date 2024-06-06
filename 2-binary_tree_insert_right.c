#include "binary_trees.h"

/**
 * binary_tree_insert_right - right child node insert in other binary tree node
 * @parent: Points to node where right-child is inserted.
 * @value: Integer value stores in new node.
 *
 * Return: Pointer to the newly created node, or NULL if allocation fails.
 *
 * Description: New node replaces the right child node, old node becomes right
 * child of the new node.
 */

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	if (parent == NULL)
		return (NULL);

	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;

	return (new_node);
}
