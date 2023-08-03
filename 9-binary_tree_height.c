#include "binary_trees.h"

/**
  * binary_tree_height - return the height of a binary tree.
  * @tree: the root node of the tree.
  * Return: the height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t l, r;

	if (!tree || (!tree->left && !tree->right))
		return (0);

	l = binary_tree_height(tree->left) + 1;
	r = binary_tree_height(tree->right) + 1;

	return (r >= l ? r : l);
}
