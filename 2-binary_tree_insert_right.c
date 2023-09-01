#include <stdio.h>
#include "binary_trees.h"

/**
 * binary_tree_insert_right - inserts a node as right child of another nodin abinary tree
 * @parent: parent to insert the node in
 * @value: the value to store the node
 * Return: pointer to the newly inserted node
 */
binary_tree_t *binary_tree_insert_right(binary_tree_t *parent, int value)
{
	binary_tree_t *newnode;

	if (!parent)
		return (NULL);
	newnode = malloc(sizeof(binary_tree_t));
	if (!newnode)
		return (NULL);
	newnode->parent = parent;
	newnode->left = NULL;
	newnode->n = value;
	newnode->right = parent->right;
	parent->right = newnode;

	if (newnode->right)
		newnode->right->parent = newnode;
	
	return (newnode);
}
