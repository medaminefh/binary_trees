#include "binary_trees.h"

/**
 * binary_tree_insert_left - function name
 * @parent: A pointer.
 * @value: The value.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *holder;

	holder = malloc(sizeof(binary_tree_t));
	if (!holder)
		return (NULL);

	if (parent->left != NULL)
	{
		holder->left = parent->left;
		parent->left->parent = holder;
	}
	parent->left = holder;

	return (holder);
}
