#include "binary_trees.h"

/**
 * binary_trees_ancestor - Finds the lowest common ancestor of two nodes
 * @first: Pointer to the first node
 * @second: Pointer to the second node
 *
 * Return: If no common ancestors return NULL, else return common ancestor
 */

binary_tree_t *binary_trees_ancestor(const binary_tree_t *first,
		const binary_tree_t *second)
{
	binary_tree_t *momo, *popo;

	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);

	momo = first->parent, popo = second->parent;
	if (first == popo || !momo || (!momo->parent && popo))
		return (binary_trees_ancestor(first, popo));
	else if (momo == second || !popo || (!popo->parent && momo))
		return (binary_trees_ancestor(momo, second));
	return (binary_trees_ancestor(momo, popo));
}
