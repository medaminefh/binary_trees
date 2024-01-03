#include "binary_trees.h"

/**
 * binary_tree_delete - function name
 * @tree: A pointer.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
void binary_tree_delete(binary_tree_t *tree)
{
	if (!tree)
		return;
	binary_tree_delete(tree->left);
	binary_tree_delete(tree->right);
	free(tree);
}
