#include "binary_trees.h"

/**
 * binary_tree_depth - function name
 * @tree: A pointer.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{

	if (tree)
	{
		if (tree->parent)
			return (1 + binary_tree_depth(tree->parent));
	}
	return (0);
}
