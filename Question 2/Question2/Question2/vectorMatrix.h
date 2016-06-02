#pragma once
#include "stdafx.h"

class vectorMatrix
{
public:
	vectorMatrix(int x, int y);
	~vectorMatrix();

	void reorderMatrix();
	void printMatrix();

private:
	vector< vector<int> > matrix;

protected:

};