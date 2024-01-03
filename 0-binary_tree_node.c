#include "binary_trees.h"

/**
 * binary_tree_node - function name
 * @parent: A pointer.
 * @value: The value.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *holder;

	holder = malloc(sizeof(binary_tree_t));
	if (!holder)
		return (NULL);

	holder->n = value;
	holder->parent = parent;
	holder->left = NULL;
	holder->right = NULL;

	return (holder);
}
