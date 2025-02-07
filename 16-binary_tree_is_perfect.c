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
 * binary_tree_is_perfect - check perfect tree
 * @tree: input tree
 * Return: 0 or 1
*/


int binary_tree_is_perfect(const binary_tree_t *tree)
{
int Lheight, Rheight;
if (tree == NULL)
{
return (0);
}
Lheight = binary_tree_height(tree->left);
Rheight = binary_tree_height(tree->right);
if (Lheight == Rheight)
{
if (tree->left == NULL && tree->right == NULL)
{
return (1);
}
return (binary_tree_is_perfect(tree->left)
&& binary_tree_is_perfect(tree->right));
}
return (0);
}
