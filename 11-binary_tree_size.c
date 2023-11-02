#include "binary_trees.h"

/**
 * binary_tree_size - Compute the size of a binary tree.
 * @tree: Pointer to the root of the binary tree.
 * Return: The size of the tree, or 0 if tree is NULL.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t size = 0, Right = 0, Left = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		Left = binary_tree_size(tree->left);
		Right = binary_tree_size(tree->right);
		size = Left + 1 + Right;
	}
	return (size);
}

