#include "binary_trees.h"
#include <stddef.h>


/**
 * binary_tree_depth - find depth of tree
 * @tree: given tree position
 * Return: depth or 0
*/


size_t binary_tree_depth(const binary_tree_t *tree)
{
size_t depth = 0;
if (tree == NULL || tree->parent == NULL)
{
return (depth);
}
depth++;
depth = binary_tree_depth(tree->parent);
return (depth + 1);
}
