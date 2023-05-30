#include "binary_trees.h"
/**
 * binary_tree_size - function that measures the size of a binary tree
 * @tree: pointer to root node of tree to measure the size
 * Return: size of binary tree
 */
size_t binary_tree_size(const binary_tree_t *tree)
{
	if (tree == NULL)
		return (0);

	return (binary_tree_size(tree->left) + 1 + binary_tree_size(tree->right));
}
