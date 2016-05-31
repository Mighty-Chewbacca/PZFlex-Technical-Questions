#include "stdafx.h"

treeIterator::treeIterator()
{
	//initialise values
	treesMatch = NULL;
	totalNodes = NULL;
}

treeIterator::~treeIterator()
{
	//destroy object here
}

bool treeIterator::getMatchResult()
{
	return treesMatch;
}

int treeIterator::getTotalNodes()
{
	return totalNodes;
}

void treeIterator::iterateTree(binaryTree *tree1, binaryTree *tree2)
{
	//this is going to kick off the recursive method
	treesMatch = iterateTree(tree1->returnRoot(), tree2->returnRoot());
}

bool treeIterator::iterateTree(node *tree1, node *tree2)
{
	//note: these trees are in actual fact just nodes, they are just being treated as their own root in this instance
	//first check if both trees are null - trees are null
	if (tree1 == NULL && tree2 == NULL)
	{
		return true;
	}
	//if they are not both null - but one is then they are not a match
	else if (tree1 == NULL || tree2 == NULL)
	{
		return false;
	}

	if (tree1->key_value != tree2->key_value)
	{
		//the values of these nodes were not the same, both trees being searched in the smame
		//order means that these should always match if identical
		return false;
	}

	bool leftMatch, rightMatch;
	//recursion to call both left and right sides of these nodes to check equality
	leftMatch = iterateTree(tree1->left, tree2->left);
	rightMatch = iterateTree(tree1->right, tree2->right);

	if (leftMatch && rightMatch)
	{
		//bith have matched, must be the same
		return true;
	}
	else
	{
		return false;
	}
}