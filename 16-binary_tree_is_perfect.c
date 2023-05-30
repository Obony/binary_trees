#include "binary_trees.h"

/**
 * binary_tree_is_leaf - function that checks if a node is a leaf
 * @node: Pointer to the node
 * Return: 1 if node is leaf or 0
 */

int binary_tree_is_leaf(const binary_tree_t *node)
{
	if (node == NULL)
	{
		return (0);
	}
	else
	{
		if (node->left == NULL && node->right == NULL)
			return (1);
		return (0);
	}
}

/**
 * calculate_height - Calculates the height of a binary tree.
 * @tree: The node that will act as root when calculating the height.
 * @height: The actual height of the tree.
 * Return: The height of the tree.
 */
size_t calculate_height(const binary_tree_t *tree, size_t height)
{
	size_t left;
	size_t right;

	left = height;
	right = height;
	if (tree == NULL)
		return (0);
	left = left + calculate_height(tree->left, height);
	right = right + calculate_height(tree->right, height);

	if (left > right)
		return (left + 1);
	return (right + 1);
}

/**
 * binary_tree_height - returns the height of the tree.
 * @tree: The node that will act as root when calculating the height.
 * Return: The height of the tree.
 */
size_t binary_tree_height(const binary_tree_t *tree)
{
	size_t height;

	if (tree == NULL)
		return (0);
	height = 0;
	height = calculate_height(tree, height);
	return (height - 1);
}

/**
 * binary_tree_is_perfect - checks if a binary tree is perfect
 * @tree: pointer to the root node of the tree
 * Return: 1 or 0
 */
int binary_tree_is_perfect(const binary_tree_t *tree)
{
	binary_tree_t *left, *right;

	if (tree == NULL)
		return (0);

	left = tree->left;
	right = tree->right;

	if (binary_tree_is_leaf(tree))
		return (1);

	if (left == NULL || right == NULL)
		return (0);

	if (binary_tree_height(left) == binary_tree_height(right))
	{
		if (binary_tree_is_perfect(left) && binary_tree_is_perfect(right))
			return (1);
	}
	return (0);
}
