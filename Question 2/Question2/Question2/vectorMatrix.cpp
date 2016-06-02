#include "stdafx.h"
#include "vectorMatrix.h"

vectorMatrix::vectorMatrix(int x, int y)
{
	matrix = vector<vector<int>>(y, vector<int>(x)); //flip the axes since the first dimension coveres number of rows not columns

	vector< vector<int> >::iterator row;
	vector<int>::iterator col;
	for (row = matrix.begin(); row != matrix.end(); row++) 
	{
		for (col = row->begin(); col != row->end(); col++)
		{
			int random = 0;
			random = (rand());
			*col = random;
		}
	}
}

vectorMatrix::~vectorMatrix()
{

}

void vectorMatrix::reorderMatrix()
{
	cout << "Rearranging the Matrix now. \n";
	int lowestSoFar = INT_MAX;
	int currentRow = NULL;
	int currentCol = NULL;
	int totalRow = NULL;
	int totalCol = NULL;

	totalCol = matrix[0].size();
	totalRow = matrix.size();

	vector< vector<int> >::iterator row;
	vector<int>::iterator col;

	for (row = matrix.begin(); row != matrix.end(); row++)
	{
		currentRow = std::distance(matrix.begin(), row);

		for (col = row->begin(); col != row->end(); col++)
		{
			currentCol = std::distance(row->begin(), col);
			//cout << std::to_string(currentCol); //gives me the current column
			//do stuff here
		}
	}

	printMatrix();

}

void vectorMatrix::printMatrix()
{
	vector< vector<int> >::iterator row;
	vector<int>::iterator col;
	for (row = matrix.begin(); row != matrix.end(); row++)
	{
		for (col = row->begin(); col != row->end(); col++)
		{
			int random = 0;
			random = (rand());
			cout << std::to_string(*col) << "__";
		}

		cout << "\n";
	}
}