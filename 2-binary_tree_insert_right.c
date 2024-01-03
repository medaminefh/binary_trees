#include "binary_trees.h"

/**
 * binary_tree_insert_right - function name
 * @parent: A pointer.
 * @value: The value.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *holder;

	if (!parent)
		return (NULL);

	holder = binary_tree_node(parent, value);
	if (!holder)
		return (NULL);

	if (parent->right != NULL)
	{
		holder->right = parent->right;
		parent->right->parent = holder;
	}
	parent->right = holder;

	return (holder);
}
