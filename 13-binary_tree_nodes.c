#include "binary_trees.h"
#include <stddef.h>


/**
 * binary_tree_nodes - count regular connected nodes
 * @tree: root of tree
 * Return: 0, 1, or total
*/


size_t binary_tree_nodes(const binary_tree_t *tree)
{
size_t count = 0;
if (tree == NULL || (tree->left == NULL && tree->right == NULL))
{
return (0);
}
count = binary_tree_nodes(tree->right) + binary_tree_nodes(tree->left) + 1;
return (count);
}
