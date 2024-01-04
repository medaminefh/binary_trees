#include "binary_trees.h"

/**
 * binary_tree_balance - function name
 * @tree: A pointer.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
int binary_tree_balance(const binary_tree_t *tree)
{
	if (tree)
	{
		return (binary_tree_height(tree->left) - binary_tree_height(tree->right));
	}
	return (0);
}

/**
 * binary_tree_height - function name
 * @tree: A pointer.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	if (tree)
	{
		size_t left = 0;
		size_t right = 0;

		left = tree->left ? 1 + binary_tree_height(tree->left) : 1;
		right = tree->right ? 1 + binary_tree_height(tree->right) : 1;
		return (left > right ? left : right);
	}
	return (0);
}
