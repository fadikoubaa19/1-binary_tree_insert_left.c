#include <stdlib.h>
#include <stdio.h>
#include "binary_trees.h"

/**
* binary_tree_insert_right - For Holbertonschool
* @parent : var
* @value : var
* Return: Always 0 (Success)
*/
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
binary_tree_t *newnode;
if (!parent)
return (NULL);
newnode = malloc(sizeof(binary_tree_t));
if (!newnode)
return (NULL);
newnode->n = value;
newnode->parent = parent;
newnode->right = parent->right;
newnode->left = NULL;
parent->right = newnode;
if (newnode->right)
newnode->right->parent = newnode;
return (newnode);
}

