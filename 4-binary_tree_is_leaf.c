#include "binary_trees.h"

/**
  * binary_tree_is_leaf - checks to see if the node is a leaf-1 or not-0.
  * @node: the Node to be checked
  * Return: 0 on fail and 1 on success.
  */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node && !node->left && !node->right)
		return (1);
	else
		return (0);
}
