#include "binary_trees.h"


/**
 * binary_tree_is_leaf - check if a node is a leaf
 * @node: node in question
 * Return: 0 or 1
*/


int binary_tree_is_leaf(const binary_tree_t *node)
{
if (!node || node->left || node->right)
{
return (0);
}
return (1);
}
