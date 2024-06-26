#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * binary_tree_is_root - this finction checks if a node
 * is a root
 * @node: this is the terget node
 * Return: (0)
 */
int binary_tree_is_root(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	if (node->parent == NULL)
	{
		return (1);
	}
	else
	{
		return (0);
	}
	return (0);
}
