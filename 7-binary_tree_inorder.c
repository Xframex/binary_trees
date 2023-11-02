#include "binary_trees.h"

/**
 * binary_tree_inorder - implementation of in-order traversal algo
 * @tree: tree struct
 * @func: node func
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
	{
		return;
	}
	else
	{
		binary_tree_inorder(tree->left, func);
		func(tree->n);
		binary_tree_inorder(tree->right, func);
	}
}
