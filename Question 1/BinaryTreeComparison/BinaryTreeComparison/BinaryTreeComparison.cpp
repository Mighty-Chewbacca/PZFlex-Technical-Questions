// BinaryTreeComparison.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"

using namespace std;

void compareTrees(binaryTree *tree1, binaryTree *tree2)
{
	//cout << "First tree's root node: " << to_string(tree1->returnRoot()->key_value) << "\n";
	//cout << "Seconds tree's root node: " << to_string(tree2->returnRoot()->key_value) << "\n";
	//cout << "\n";

	//this tree iterator is just a class which will compare the two trees 
	//- comparison function held inside to make the code cleaner
	treeIterator iterator1 = treeIterator();
	iterator1.iterateTree(tree1, tree2);
	//get results for that iteration then iterate tree 2

	if (iterator1.getMatchResult() == true)
	{
		cout << "The trees are a match \n \n";
	}
	else
	{
		cout << "The trees do not match \n \n";
	}
}

int main()
{
	//set the loop to start running
	bool isRunning = true;

	cout << "Type 'compare' to start the comparison \n";
	cout << "Type 'exit' to end the program \n";
	cout << "Type 'help' to see the help section \n";
	cout << "\n";

	//create the 4 binary trees that we are going to use for comparison

	binaryTree treeA = binaryTree();
	binaryTree treeB = binaryTree();
	binaryTree treeC = binaryTree();
	binaryTree treeD = binaryTree();

	//now fill each one with values
	//tree A and D will be identical to show a match, the rest will be different
	treeA.insert(25);
	treeA.insert(30);
	treeA.insert(10);
	treeA.insert(16);
	treeA.insert(27);
	treeA.insert(80);
	treeA.insert(1);

	treeB.insert(25); //smaller structure but same values
	treeB.insert(30);
	treeB.insert(10);

	treeC.insert(40); //exact same structure - different values
	treeC.insert(50);
	treeC.insert(20);
	treeC.insert(22);
	treeC.insert(41);
	treeC.insert(60);
	treeC.insert(1);

	treeD.insert(25); //exact same tree as A
	treeD.insert(30);
	treeD.insert(10);
	treeD.insert(16);
	treeD.insert(27);
	treeD.insert(80);
	treeD.insert(1);
	
	//node *aRoot = treeA.returnRoot();

	//get a simple application loop up so that we can keep the console open after results are shown
	while (isRunning)
	{
		string input;
		getline(cin, input);
		
		if (input == "exit")
		{
			isRunning = false;
		}
		else if (input == "compare")
		{
			cout << "Starting Comparison - There are 4 Binary Trees in the program: A, B, C and D \n  Enter the letter of the first tree you would like to compare: \n";
			cout << "\n";
			//cout << "root node:" << to_string(aRoot->key_value);

			string firstTree;
			getline(cin, firstTree);

			//always check if user wants to leave program
			if (firstTree == "exit" || firstTree == "Exit")
			{
				break;
			}

			cout << "First tree selected: Tree: " << firstTree << "\n";
			cout << "Enter the letter of the second tree you would like to compare: \n";
			cout << "\n";

			//make sure the user has put a valid letter into the program
			binaryTree *tree1 = NULL;
			if (firstTree == "a" || firstTree == "A")
			{
				tree1 = &treeA;
			}
			else if (firstTree == "b" || firstTree == "B")
			{
				tree1 = &treeB;
			}
			else if (firstTree == "c" || firstTree == "C")
			{
				tree1 = &treeC;
			}
			else if (firstTree == "d" || firstTree == "D")
			{
				tree1 = &treeD;
			}

			string secondTree;
			getline(cin, secondTree);

			//always check if user wants to leave program
			if (secondTree == "exit" || secondTree == "Exit")
			{
				break;
			}

			cout << "Second tree selected: Tree: " << secondTree << "\n";
			cout << "\n";

			//make sure the user has put a valid letter into the program
			binaryTree *tree2 = NULL;
			if (secondTree == "a" || secondTree == "A")
			{
				tree2 = &treeA;
			}
			else if (secondTree == "b" || secondTree == "B")
			{
				tree2 = &treeB;
			}
			else if (secondTree == "c" || secondTree == "C")
			{
				tree2 = &treeC;
			}
			else if (secondTree == "d" || secondTree == "D")
			{
				tree2 = &treeD;
			}

			//if the trees were assigned then neither will be null - if any are null then it was not a valid input
			if (tree1 != NULL && tree2 != NULL)
			{
				compareTrees(tree1, tree2);
			}
			else
			{
				cout << "One or more of the selected trees were invalid - please start the comparison again \n";
				cout << "Remember - the trees are defined as A, B, C and D \n";
				cout << "\n";
			}
		}
		else if (input == "help")
		{
			cout << "\n";
			cout << "Commands: \n";
			cout << "\n";
			cout << "exit: stops the program from running. \n";
			cout << "\n";
			cout << "compare: starts the compare behaviour. \n";
			cout << "	  then one at a time enter either A, B, C or D to choose 2 trees to compare \n";
			cout << "\n";
		}
	}

	//stopped running so exit please
    return 0;
}

