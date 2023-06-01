#include "binary_trees.h"
/**
 * bst_search - searchers for a value in a BST
 * @tree: pointer to root node of the BST to search
 * @value: value to search in the tree
 * Return: pointer to node conataining value equals to vlue
 */
bst_t *bst_search(const bst_t *tree, int value)
{
	bst_t *temp = (bst_t *)tree;

	while (temp)
	{
		if (temp->n == value)
			return (temp);

		if (value < temp->n)
			temp = temp->left;

		else
			temp = temp->right;
	}
	return (0);
}
