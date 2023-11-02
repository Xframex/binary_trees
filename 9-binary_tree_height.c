#include "binary_trees.h"

/**
 * binary_tree_height - height of tree by using recursive appproch
 * @tree: tree to go through
 * Return: the height
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t Left = 0;
	size_t Right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		if (tree)
		{
			Left = tree->left ? 1 + binary_tree_height(tree->left) : 0;
			Right = tree->right ? 1 + binary_tree_height(tree->right) : 0;
		}
		return ((Left > Right) ? Left : Right);
	}
}

