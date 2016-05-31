#include "stdafx.h"

binaryTree::binaryTree()
{
	root = NULL;
}

binaryTree::~binaryTree()
{
	destroyTree();
}

void binaryTree::destroyTree(node *leaf)
{
	if (leaf != NULL)
	{
		destroyTree(leaf->left);
		destroyTree(leaf->right);
		delete leaf;
	}
}

void binaryTree::insert(int key, node *leaf)
{
	if (key < leaf->key_value)
	{
		if (leaf->left != NULL)
		{
			insert(key, leaf->left);
		}
		else
		{
			leaf->left = new node;
			leaf->left->key_value = key;
			leaf->left->left = NULL;
			leaf->left->right = NULL;
		}
	}
	else
		if (key>=leaf->key_value)
		{
			if (leaf->right != NULL)
			{
				insert(key, leaf->right);
			}
			else
			{
				leaf->right = new node;
				leaf->right->key_value = key;
				leaf->right->left = NULL;
				leaf->right->right = NULL;
			}
		}
}

node *binaryTree::search(int key, node *leaf)
{
	if (leaf != NULL)
	{
		if (key == leaf->key_value)
		{
			return leaf;
		}
		if (key < leaf->key_value)
		{
			return search(key, leaf->left);
		}
		else
		{
			return search(key, leaf->right);
		}
	}
	else return NULL;
}

void binaryTree::insert(int key)
{
	if (root != NULL)
	{
		insert(key, root);
	}
	else
	{
		root = new node;
		root->key_value = key;
		root->left = NULL;
		root->right = NULL;
	}
}

node *binaryTree::search(int key)
{
	return search(key, root);
}

void binaryTree::destroyTree()
{
	destroyTree(root);
}

node *binaryTree::returnRoot()
{
	return root;
}