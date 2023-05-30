#include "binary_trees.h"

/**
 * binary_tree_node - Creates a binary tree node.
 * @parent: A pointer to the parent of the node to create.
 * @value: The value to put in the new node.
 *
 * Return: If an error occurs - NULL.
 *         Otherwise - a pointer to the new node.
 */

binary_tree_t *binary_tree_node(binary_tree_t *parent, int value)
{
    binary_tree_t *new_n;

    /* Allocate memory for the new node */
    new_n = malloc(sizeof(binary_tree_t));
    if (new_n == NULL)
        return (NULL);

    /* Set the value and parent of the new node */
    new_n->n = value;
    new_n->parent = parent;

    /* Initialize the left and right child pointers to NULL */
    new_n->left = NULL;
    new_n->right = NULL;

    /* Return a pointer to the new node */
    return (new_n);
}
