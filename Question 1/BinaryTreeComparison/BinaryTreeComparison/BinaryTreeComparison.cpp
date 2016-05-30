// BinaryTreeComparison.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"

using namespace std;


int main()
{
	bool isRunning = true;

	cout << "Type 'compare' to start the comparison \n";
	cout << "Type 'exit' to end the program \n";
	cout << "Type 'help' to see the help section \n";
	cout << "\n";

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

