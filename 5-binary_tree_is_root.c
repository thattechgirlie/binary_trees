#include "binary_trees.h"
/**
 * binary_tree_is_root - checks if tree is root
 * @node: pointer to node
 * Return: returns 0 or 1
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL || node->parent != NULL)
		return (0);
	return (1);
}
