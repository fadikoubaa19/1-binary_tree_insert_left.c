#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_depth - for holbertonschool
* @tree : varr
* Return: 0
*/
size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t p = 0;
if (!tree || !tree->parent)
return (0);
while (tree->parent)
{
tree = tree->parent;
p = p + 1;
}
return (p);
}
