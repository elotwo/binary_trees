#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 *
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));
	binary_tree_t *current;
	temp_node->n = value;
	temp_node->parent = parent;
	temp_node->left = NULL;
	temp_node->right = NULL;
	if (parent == NULL)
	{
		return temp_node;
	}
	else
	{
		current = parent;
		while (current->left != NULL)
		{
			current = current->left;
		}
		current->left = temp_node;
		return temp_node;
	}
}


