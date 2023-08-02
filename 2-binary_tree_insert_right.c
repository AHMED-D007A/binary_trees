#include "binary_trees.h"

/**
 * binary_tree_insert_right - a function that inserts the left-child of a node.
 * @parent: the parent node.
 * @value: the value of the inserted node.
 * Return: pointer point to the new node.
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_nodde;

	if (!parent)
		return (NULL);
	new_nodde = malloc(sizeof(binary_tree_t));
	if (!new_nodde)
		return (NULL);
	new_nodde->n = value;
	new_nodde->parent = parent;
	new_nodde->left = NULL;
	if (parent->right)
	{
		new_nodde->right = parent->right;
		parent->right->parent = new_nodde;
		parent->right = new_nodde;
	}
	else
	{
		new_nodde->right = NULL;
		parent->right = new_nodde;
	}

	return (new_nodde);
}
