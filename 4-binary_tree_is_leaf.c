#include "binary_trees.h"
/**
 * binary_tree_is_leaf - check if the tree is a leaf
 * @node: pointer to node
 * Return: returns 1 or 0
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL || NULL || node->left != NULL || node->right != NULL)
		return (0);
	return (1);
}
