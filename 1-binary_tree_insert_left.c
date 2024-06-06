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
	/* Check if parent node is NULL	*/
	if (parent == NULL)
		return (NULL);

	/* Create the new node */
	binary_tree_t *new_node = binary_tree_node(parent, value);

	if (new_node == NULL)
		return (NULL);

	/* If parent already has left child, then update pointers */
	if (parent->left != NULL)
	{
		new_node->left = parent->left; /*New node replaces left child*/
		parent->left->parent = new_node; /*Old left child parent update*/
	}
	parent->left = new_node; /*New node set as left child of the parent*/

	return (new_node); /* Returns newly created node */
}
