#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value) {
    // Allocate memory for the new node
    binary_tree_t *new_node = (binary_tree_t *)malloc(sizeof(binary_tree_t));

    // Check if memory allocation was successful
    if (new_node == NULL) {
        // Memory allocation failed, return NULL to indicate failure
        return NULL;
    }

    // Set the value of the new node
    new_node->value = value;

    // Set the parent of the new node
    new_node->parent = parent;

    // Initialize left and right child pointers to NULL
    new_node->left = NULL;
    new_node->right = NULL;

    // Return the pointer to the new node
    return new_node;
}