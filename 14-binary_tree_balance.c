#include "binary_trees.h"
#define MAX(a, b)  (a < b ? b : a)

/**
 * height - for holbertonschool
 * @tree: varr
 * Return: 0
 */

size_t height(const binary_tree_t *tree)
{
if (!tree)
return (0);
return (1 + MAX(height(tree->left), height(tree->right)));
}

/**
 * binary_tree_height - for holbertonschool
 * @tree: var
 * Return: 0
 */

size_t binary_tree_height(const binary_tree_t *tree)
{
size_t f;

if (!tree)
return (0);
f = height(tree);
return (f - 1);
}

/**
 * binary_tree_balance - for holbertonschool
 * @tree: var
 * Return: 0
 */

int binary_tree_balance(const binary_tree_t *tree)
{
int left = 0, right = 0;

if (!tree)
return (0);
if (tree->left != 0 && tree->right != 0)
{
left = (int)binary_tree_height(tree->left);
right = (int)binary_tree_height(tree->right);
}
else
{
if (tree->left != 0)
left = (int)binary_tree_height(tree);
if (tree->right != 0)
right = (int)binary_tree_height(tree);
}
return (left - right);
}

