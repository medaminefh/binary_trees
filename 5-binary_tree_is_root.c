#include "binary_trees.h"

/**
 * binary_tree_is_root - function name
 * @node: A pointer.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (!node)
		return (0);
	if (!node->parent)
		return (1);
	return (0);
}
