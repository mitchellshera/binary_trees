#include "binary_trees.h"

/**
 * binary_tree_insert_left - Inserts a node as a left-child of
 *                           of another in a binary tree.
 * @parent: A pointer to the node to insert the left-child in.
 * @value: The value to store in the new node.
 *
 * Return: If parent is NULL or an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */

binary_tree_t *binary_tree_insert_left(binary_tree_t *parent, int value) {
    if (parent == NULL) {
        return NULL;
    }

    binary_tree_t *new_left_child = binary_tree_node(parent, value);

    if (new_left_child == NULL) {
        return NULL;
    }

    if (parent->left != NULL) {
        new_left_child->left = parent->left;
        parent->left->parent = new_left_child;
    }

    parent->left = new_left_child;

    return new_left_child;
}
