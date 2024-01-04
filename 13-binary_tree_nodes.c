#include "binary_trees.h"

/**
 * binary_tree_nodes - function name
 * @tree: A pointer.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
size_t binary_tree_nodes(const binary_tree_t *tree)
{
	size_t nodes = 0;

	if (tree)
	{
		if (tree->left || tree->right)
			nodes += 1;
		nodes += binary_tree_nodes(tree->left);
		nodes += binary_tree_nodes(tree->right);
	}
	return (nodes);
}
