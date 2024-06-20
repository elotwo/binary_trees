#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_right - inserting a node on the right
 * side of a binary tree
 * @parent: represent parent of the node
 * @value: reprent the value to inserted into the node
 * Return: (0)
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent != NULL)
	{
		if (parent->right != NULL)
		{
			new_node->right = parent->right;
			parent->right->parent = new_node;
		}
	}
	else
	{	free(new_node);
		return (NULL);
	}
	parent->right = new_node;
	new_node->parent = parent;
	return (new_node);
}
