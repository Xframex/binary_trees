#include "binary_trees.h"

/**
 * binary_tree_leaves - count the leaves of tree
 * @tree: checker if ( parent ->left null and --> right null
 * Return: number of leaves
 */
size_t binary_tree_leaves(const binary_tree_t *tree)
{
	size_t leaf = 0, Left = 0, Right = 0;

	if (tree == NULL)
	{
		return (0);
	}
	else
	{
		Left = binary_tree_leaves(tree->left);
		Right = binary_tree_leaves(tree->right);
		leaf = Left + Right;
		return ((!Left && !Right) ? leaf + 1 : leaf + 0);
	}
}
