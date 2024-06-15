#include <stdlib.h>
#include <stdio.h>
#include <stddef.h>
#include "binary_trees.h"
/**
 * binary_tree_insert_left - this script is for
 * inserting a left node on a binary tree
 * @parent: represent the parent node or root node
 * @value: reprent the value to be inserted in the left node
 * Return: (0)
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (new_node == NULL)
		return (NULL);
	new_node->n = value;
	new_node->left = NULL;
	new_node->right = NULL;
	if (parent != NULL)
	{
		if (parent->left != NULL)
		{
			new_node->left = parent->left;
			parent->left->parent = new_node;
		}
	}
	else
	{
		return (NULL);
	}
	parent->left = new_node;
	new_node->parent = parent;
	return (new_node);
}


