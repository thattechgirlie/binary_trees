#include "binary_trees.h"
/**
 * binary_trees_ancestor - checks for ancestor of tree
 * @first: this is the first node
 * @second: this is the second node
 * Return: returns value
 */
binary_tree_t *binary_trees_ancestor(const binary_tree_t *first, const binary_tree_t *second)
{
	binary_tree_t *m, *p;
	if (!first || !second)
		return (NULL);
	if (first == second)
		return ((binary_tree_t *)first);
	m = first->parent, p = second->parent;
	if (first == p || !m || (!m->parent && p))
		return (binary_trees_ancestor(first, p));
	else if (m == second || !p || (!p->parent && m))
		return (binary_trees_ancestor(m, second));
	return (binary_trees_ancestor(m, p));
}
