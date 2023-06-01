#include "binary_trees.h"
/**
 * array_to_bst - builds a binary search tree from an array
 * @array: pointer to first elememnt of array to be converted to BST
 * @size: arr size
 * Return: pointer to root node of created BST
 */
bst_t *array_to_bst(int *array, size_t size)
{
	bst_t *root = NULL;
	size_t i;

	for (i = 0; i < size; i++)
		bst_insert(&root, array[i]);

	return (root);
}
