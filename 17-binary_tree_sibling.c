#include "binary_trees.h"
/**
 * binary_tree_sibling - check for tree sibling
 * @node: point to sibling node
 * Return: returns NULL or pointer
 *
 */
binary_tree_t *binary_tree_sibling(binary_tree_t *node)
{
	if (node == NULL || node->parent == NULL)
		return (NULL);
	if (node->parent->left == node)
		return (node->parent->right);
	return (node->parent->left);
}
