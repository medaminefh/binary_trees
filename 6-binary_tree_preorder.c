#include "binary_trees.h"

/**
 * binary_tree_preorder - function name
 * @tree: A pointer.
 * @func: A function
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
void binary_tree_preorder(const binary_tree_t *tree, void (*func)(int))
{

	if (tree && func)
	{
		func(tree->n);
		binary_tree_preorder(tree->left, func);
		binary_tree_preorder(tree->right, func);

	}
}
