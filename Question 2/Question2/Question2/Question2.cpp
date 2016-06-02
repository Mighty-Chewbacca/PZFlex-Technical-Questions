// Question2.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include "vectorMatrix.h"

bool isRunning = true;

int main()
{
	vectorMatrix myMatrix = vectorMatrix(6, 4);
	myMatrix.printMatrix();
	myMatrix.reorderMatrix();

	while (isRunning)
	{

	}

    return 0;
}

