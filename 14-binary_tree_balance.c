#include "binary_trees.h"

/**
  * binary_tree_balance - Checks to see if the binary tree is balanced
  * @tree: tree to measure
  * Return: left - right.
  */
int binary_tree_balance(const binary_tree_t *tree)
{
	int left, right;

	if (!tree)
		return (0);
	left = tree->left ? binary_tree_height(tree->left) + 1 : 0;
	right = tree->right ? binary_tree_height(tree->right) + 1 : 0;

	return (left - right);
}
