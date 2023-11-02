#include "binary_trees.h"

/**
 * binary_tree_height - Calculate the height of a binary tree.
 * @tree: A pointer to the root node of the tree.
 * Return: The height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	size_t left_h = binary_tree_height(tree->left);
	size_t right_h = binary_tree_height(tree->right);

	return (left_h > right_h ? left_h + 1 : right_h + 1);
}

