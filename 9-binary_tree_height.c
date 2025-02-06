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
if (tree == NULL || (tree->left == NULL && tree->right == NULL))
{
return (0);
}
Lsize = binary_tree_height(tree->left);
Rsize = binary_tree_height(tree->right);
return (1 + (Lsize > Rsize ? Lsize : Rsize));
}
