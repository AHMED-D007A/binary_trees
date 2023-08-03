#include "binary_trees.h"

/**
 * binary_tree_size - a function that measures the size of a binary tree.
 * @tree: the root node of the tree.
 * Return: the size form the given node.
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
	size_t s;

	if (!tree)
		return (0);

	s = binary_tree_size(tree->left) + binary_tree_size(tree->right) + 1;

	return (s);
}
