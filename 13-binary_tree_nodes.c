#include "binary_trees.h"

/**
 * binary_tree_nodes - for holbertonschool
 * @tree: varr
 * Return: 0
 */

size_t binary_tree_nodes(const binary_tree_t *tree)
{
if (!tree)
return (0);
if (tree->right == 0 && tree->left == 0)
return (0);
return ((binary_tree_nodes(tree->left) + binary_tree_nodes(tree->right) + 1));
}
