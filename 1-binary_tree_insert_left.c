#include "binary_trees.h"

/**
 * binary_trees_left - a function that inserts the left-child of another node.
 * @parent: the parent node.
 * @value: the value of the inserted node.
 * Return: pointer point to the new node.
*/
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_nodde;

	new_nodde = malloc(sizeof(binary_tree_t));
	if (!new_nodde || !parent)
		return (NULL);
	new_nodde->n = value;
	new_nodde->parent = parent;
	if (parent->left)
	{
		new_nodde->left = parent->left;
		parent->left->parent = new_nodde;
		parent->left = new_nodde;
	}
	else
	{
		new_nodde->left = NULL;
		parent->left = new_nodde;
	}
	new_nodde->right = NULL;

	return (new_nodde);
}
