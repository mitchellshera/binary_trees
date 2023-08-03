#include "binary_trees.h"

/**
 * binary_tree_is_leaf - Checks if a node is a leaf of a binary tree.
 * @node: A pointer to the node to check.
 *
 * Return: If the node left and right is null
 *         
 */

int binary_tree_is_leaf(const binary_tree_t *node) {
    if (node == NULL) {
        return 0;
    }

    return (node->left == NULL && node->right == NULL) ? 1 : 0;
}
