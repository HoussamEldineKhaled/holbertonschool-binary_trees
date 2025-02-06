#include "binary_trees.h"
#include <stddef.h>


/**
 * binary_tree_size - find size of tree
 * @tree: tree
 * Return: 0 or size
*/
size_t binary_tree_size(const binary_tree_t *tree)
{
size_t Lsize = 1;
size_t Rsize = 1;
if (tree == NULL)
{
return (0);
}
Lsize = binary_tree_size(tree->left);
Rsize = binary_tree_size(tree->right);
return (1 + Lsize + Rsize);
}
