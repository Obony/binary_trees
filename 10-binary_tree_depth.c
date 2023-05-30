#include "binary_trees.h"

/**
 * max_nodes - returns max linear nodes in a binary tree
 * @tree: pointer to root of the tree
 *
 * Return: max linear nodes
 */
size_t max_nodes(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (max_nodes(tree->parent) + 1);
}

/**
 * binary_tree_depth - measures the depth of a node in a binary tree
 * @tree: pointer to the node to measure the depth
 *
 * Return: depth
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{
	if (!tree)
		return (0);

	return (max_nodes(tree) - 1);
}
