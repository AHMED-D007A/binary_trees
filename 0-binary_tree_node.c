#include "binary_trees.h"

/**
 * binary_tree_node - a function that creates a binary tree node.
 * @parent: the node that will create a child node for it.
 * @value: the value of created node.
 * Return: pointer point to the created node.
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *new_nodde;

	new_nodde = malloc(sizeof(binary_tree_t));

	if (!new_nodde)
		return (NULL);
	new_nodde->n = value;
	new_nodde->parent = parent;
	new_nodde->left = NULL;
	new_nodde->right = NULL;

	return (new_nodde);
}
