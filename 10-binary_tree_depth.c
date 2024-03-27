#include "binary_trees.h"
/**
 * binary_tree_depth - checks for tree depth
 * @tree: point to root node
 * Return: returns value
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	return ((tree && tree->parent) ? 1 + binary_tree_depth(tree->parent) : 0);
}
