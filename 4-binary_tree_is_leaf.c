#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 *
 */
int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return(0);
	}
	if (node->left != NULL ||  node->right != NULL)
	{
		binary_tree_is_leaf(node->left);
		binary_tree_is_leaf(node->right);
	}
	else
	{
		return(1);
	}
	return (0);
}		
