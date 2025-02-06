#include "binary_trees.h"
#include <stddef.h>



/**
 * binary_tree_leaves - count number of leaves
 * @tree: root node
 * Return: 0 1 or total leaves
*/


size_t binary_tree_leaves(const binary_tree_t *tree)
{
size_t Lcount;
size_t Rcount;
if (tree == NULL)
{
return (0);
}
if (tree->left == NULL && tree->right == NULL)
{
return (1);
}
Lcount = binary_tree_leaves(tree->left);
Rcount = binary_tree_leaves(tree->right);
return (Lcount + Rcount);
}
