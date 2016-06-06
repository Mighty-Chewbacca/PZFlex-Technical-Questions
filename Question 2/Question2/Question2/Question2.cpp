// Question2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "vectorMatrix.h"
#include <sstream>
#include <iostream>

bool isRunning = true;

int main()
{
	vectorMatrix myMatrix = vectorMatrix(1, 1);
	//myMatrix.printMatrix();
	//myMatrix.reorderMatrix();

	cout << "Matrix Sorting Program: \n";
	cout << "Allows you to create a custom sixed matrix and then sort its columns by lowest to highest \n";
	cout << "You can run the program multiple times without having to close it \n";
	cout << "once done sorting one, simply run the create command again to resize your matrix \n \n";
	cout << "Commands: \n";
	cout << "\n";
	cout << "exit: stops the program from running. \n";
	cout << "\n";
	cout << "create: allows you to create a custom sized matrix. \n";
	cout << "	  entering one value at a time you choose the number of columns and then rows that the matrix will have \n";
	cout << "\n";
	cout << "sort: sorts the created matrix. \n";
	cout << "	  sorts the values in the matrix in order from lowest to highest in their respective columns \n";
	cout << "\n";

	while (isRunning)
	{
		string input;
		getline(cin, input);

		if (input == "exit")
		{
			isRunning = false;
		}
		else if (input == "create")
		{
			cout << "Using this you may create a matrix of your chosen dimensions \n";
			cout << "Please Enter the number of Columns you would like: \n";
			cout << "\n";

			string firstdimensions;
			getline(cin, firstdimensions);

			std::istringstream sin1(firstdimensions);
			int cols = NULL;
			sin1 >> cols;

			//always check if user wants to leave program
			if (firstdimensions == "exit" || firstdimensions == "Exit")
			{
				break;
			}

			cout << "\n";
			cout << "Please Enter the number of Rows you would like: \n";
			cout << "\n";

			string secondDimensions;
			getline(cin, secondDimensions);

			std::istringstream sin2(secondDimensions);
			int rows = NULL;
			sin2 >> rows;

			//always check if user wants to leave program
			if (secondDimensions == "exit" || secondDimensions == "Exit")
			{
				break;
			}
			cout << "\n";

			//if the trees were assigned then neither will be null - if any are null then it was not a valid input
			if (rows != NULL && cols != NULL)
			{
				myMatrix = vectorMatrix(cols, rows);
				cout << "\n The following Matrix was created: \n \n";
				myMatrix.printMatrix();

			}
			else
			{
				cout << "One or more of the selected values were invalid - please tryn again \n";
				cout << "Remember - only input numbers please - no spaces \n";
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
			cout << "create: allows you to create a custom sized matrix. \n";
			cout << "	  entering one value at a time you choose the number of columns and then rows that the matrix will have \n";
			cout << "\n";
			cout << "sort: sorts the created matrix. \n";
			cout << "	  sorts the values in the matrix in order from lowest to highest in their respective columns \n";
			cout << "\n";
		}
		else if (input == "sort")
		{
			myMatrix.reorderMatrix();
		}
	}

    return 0;
}

