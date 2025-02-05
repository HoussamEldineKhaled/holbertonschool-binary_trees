#include "binary_trees.h"
#include <stdlib.h>
#include <stddef.h>

/**
 * binary_tree_node - make a new node for a binary tree
 * @parent: parent of the node
 * @value: node value
 * Return: NULL or the node
*/
binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
binary_tree_t *node = malloc(sizeof(binary_tree_t));
if (!node)
{
return (NULL);
}
node->n = value;
node->parent = parent;
node->next = NULL;
node->prev = NULL;
return (node);
}
