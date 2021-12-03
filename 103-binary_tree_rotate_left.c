#include "binary_trees.h"

/**
 * binary_tree_rotate_left - performs a left-rotation on a binary tree
 * @tree: Pointer to the root node of the tree to traverse.
 *
 * Return: a pointer to the new root node of the tree once rotated
 */
binary_tree_t *binary_tree_rotate_left(binary_tree_t *tree)
{
	binary_tree_t *aux_node;

	if (!tree || !tree->right)
		return (NULL);

	aux_node = tree->right;
	aux_node->parent = tree->parent;
	tree->parent = aux_node;
	tree->right = aux_node->left;
	aux_node->left = tree;
	return (aux_node);
}
