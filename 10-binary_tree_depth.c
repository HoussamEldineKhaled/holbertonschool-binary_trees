#include "binary_trees.h"





size_t binary_tree_depth(const binary_tree_t *tree)
{
  size_t depth = -1;
  if (tree == NULL || (tree->left == NULL && tree->right == NULL))
    {
      return (0);
    }
  
}
