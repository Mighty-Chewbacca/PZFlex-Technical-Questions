#pragma once
#include "stdafx.h"

class treeIterator
{
public:
	treeIterator(); //con
	~treeIterator(); //decon

	int getTotalNodes();
	bool getMatchResult();

	void iterateTree(binaryTree *tree1, binaryTree *tree2);

private:
	int totalNodes;
	bool treesMatch;

	bool iterateTree(node *tree1, node *tree2);

protected:
	//no protected stuff
};
