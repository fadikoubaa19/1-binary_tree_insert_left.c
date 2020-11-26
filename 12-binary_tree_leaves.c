#include "binary_trees.h"

/**
 * binary_tree_leaves - for holbertonschool
 * @tree: var
 * Return: 0
 */

size_t binary_tree_leaves(const binary_tree_t *tree)
{
if (!tree)
return (0);
if (tree->left == 0 && tree->right == 0)
return (1);
else
return (binary_tree_leaves(tree->left) + binary_tree_leaves(tree->right));
}

