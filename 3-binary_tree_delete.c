#include "binary_trees.h"

/**
 * binary_tree_delete - use Post-order algo (from child to root)
 * check when the node left and right are NULL
 * @tree: tree to free
 * Return: empty
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return;
	}
	else
	{
		if (tree != NULL)
		{
			binary_tree_delete(tree->left);
			binary_tree_delete(tree->right);
		}
		free(tree);
	}

}
