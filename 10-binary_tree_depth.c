#include "binary_trees.h"
/**
 * binary_tree_depth - Function that measures the height of a binary tree.
 * @tree: Pointer to the node to measure the depth.
 *
 * Return: If tree is NULL, your function must return 0.
 */
size_t binary_tree_depth(const binary_tree_t *tree)
{

	size_t j = 0;

	if (tree == NULL)
		return (0);

	while (tree->parent)
	{
		tree = tree->parent;
		j++;
	}
	return (j);
}
