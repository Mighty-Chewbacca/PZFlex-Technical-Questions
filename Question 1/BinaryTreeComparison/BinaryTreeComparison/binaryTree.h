#include "node.h"

class binaryTree
{
public:
	binaryTree();
	~binaryTree();

	void insert(int key);
	node *search(int key);
	void destroyTree();

private:
	void destroyTree(node *leaf);
	void insert(int key, node *leaf);
	node *search(int key, node *leaf);

	node *root;
};
