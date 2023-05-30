#include "binary_trees.h"
/**
 * binary_tree_inorder - traverses binary tree through inorder traversal
 * @tree: pointer to the root node of tree to be travrersed
 * @func: pointer to a function to call for each node.
 * The value in the node must be passed as a parameter to this function
 * Return: Nothing
 */
void binary_tree_inorder(const binary_tree_t *tree, void (*func)(int))
{
	if (tree == NULL || func == NULL)
		return;

	binary_tree_inorder(tree->left, func);
	func(tree->n);
	binary_tree_inorder(tree->right, func);
}
