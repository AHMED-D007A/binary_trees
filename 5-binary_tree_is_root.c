#include "binary_trees.h"
/**
  * binary_tree_is_root - checks to see if root node
  * @node: the Node to be checked.
  * Return: 1 on success and 0 on failing.
  */
int binary_tree_is_root(const binary_tree_t *node)
{
	return (node && !node->parent ? 1 : 0);
}
