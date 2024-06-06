#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"
/**
 *
 */
binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value)
{
	binary_tree_t *tmp_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

	if (tmp_node == NULL)
		return (NULL);
	tmp_node->n = value;
	tmp-node->left = NULL;
	tmp_node->right = NULL;

