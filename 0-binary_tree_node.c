#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include "binary_trees.h"
/**
 * binary_tree_node - create a binary three node
 * @parent: A pointer to the parent node of the node to create.
 * @value: The value to put in the new node.
 * Return: A pointer to the newly created node, or NULL on failure.
 */
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
	binary_tree_t *temp_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (temp_node == NULL)
		return (NULL);
	temp_node->n = value;
	temp_node->parent = parent;
	temp_node->left = NULL;
	temp_node->right = NULL;
	return (temp_node);
}


