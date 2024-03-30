#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 *
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_;

	new_ = malloc(sizeof(binary_tree_t));
	if (new_ == NULL)
		return (NULL);

	new_->n = value;
	new_->parent = parent;
	new_->left = NULL;
	new_->right = NULL;

	return (new_);
}
