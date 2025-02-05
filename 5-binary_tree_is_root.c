#include "binary_trees.h"


/**
 * binary_tree_is_root - tree root
 * @node: node in question
 * Return: 0 or 1
*/
int binary_tree_is_root(const binary_tree_t *node)
{
if (node == NULL || node->parent)
{
return (0);
}
return (1);
}
