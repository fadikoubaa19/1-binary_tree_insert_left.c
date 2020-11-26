#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_is_leaf - its leaf or not
* @node : The parent.
* Return: Always 0 (Success)
*/
int binary_tree_is_leaf(const binary_tree_t *node)
{
if (node == NULL)
return (0);
if (node->left == NULL && node->right == NULL)
return (1);
return (0);
}
