#include "binary_trees.h"

/**
 * binary_tree_postorder - function name
 * @tree: A pointer.
 * @func: A function
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
void binary_tree_postorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree && func)
	{
		binary_tree_postorder(tree->left, func);
		binary_tree_postorder(tree->right, func);
		func(tree->n);

	}
}
