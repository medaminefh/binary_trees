#include "binary_trees.h"

/**
 * binary_tree_size - function name
 * @tree: A pointer.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
size_t binary_tree_size(const binary_tree_t *tree)
{

	if (tree)
		return (1 + binary_tree_size(tree->left) + binary_tree_size(tree->right));
	return (0);
}
