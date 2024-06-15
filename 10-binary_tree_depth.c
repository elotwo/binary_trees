#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 * 
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (tree == NULL)
	{
		return(0);
	}
	else
	{
		size_t count_left = binary_tree_depth(tree->left);
		size_t count_right = binary_tree_depth(tree->right);
		if (count_left > count_right)
			return (count_left + 1);
		else
			return(count_right + 1);
	}
}
