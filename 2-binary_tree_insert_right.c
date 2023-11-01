#include "binary_trees.h"
/**
* binary_tree_insert_right -- add node in right of the parent
* If the parent node already has a right child, update the new node
* @parent: parent of the specified node
* @value: value of the node
* Return: NULL if it fails or the new node
*/

binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node;

	if (parent == NULL)
	{
		return (NULL);
	}

	new_node = binary_tree_node(parent, value);
	if (new_node == NULL)
	{
		return (NULL);
	}
	if (parent->right != NULL)
	{
		new_node->right = parent->right;
		parent->right->parent = new_node;
	}
	parent->right = new_node;
	return (new_node);
}
