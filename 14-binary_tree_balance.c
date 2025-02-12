#include "binary_trees.h"
#include <stddef.h>
/**
 * binary_tree_height - height of the binary tree
 * @tree: input tree
 * Return: -1 or the height
*/


size_t binary_tree_height(const binary_tree_t *tree)
{
size_t Lsize = 0;
size_t Rsize = 0;
if (tree == NULL)
{
return (0);
}
Lsize = binary_tree_height(tree->left);
Rsize = binary_tree_height(tree->right);
return (1 + (Lsize > Rsize ? Lsize : Rsize));
}
/**
 * binary_tree_balance - tree balance
 * @tree: root node
 * Return: 0 or balance
*/
int binary_tree_balance(const binary_tree_t *tree)
{
int Lheight;
int Rheight;
if (tree == NULL)
{
return (0);
}
Lheight = (int)binary_tree_height(tree->left);
Rheight = (int)binary_tree_height(tree->right);
return (Lheight - Rheight);
}
