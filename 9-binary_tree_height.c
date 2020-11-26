#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_height - Entry point
* @tree : The parent.
* Return: Always 0 (Success)
*/
size_t binary_tree_height(const binary_tree_t *tree)
{
int left1 = 0;
int right1 = 0;
if (!tree)
return (0);
if (tree->left)
left1 = 1 + binary_tree_height(tree->left);
if (tree->right)
right1 = 1 + binary_tree_height(tree->right);
if (left1 > right1)
return (left1);
else
return (right1);
}

