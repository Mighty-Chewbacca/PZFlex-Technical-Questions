// Question3.cpp : Defines the entry point for the console application.
//
#include "stdafx.h"
#include <fstream>
#include <iostream>
#include <complex>
#include <fstream>
#include <string>
using namespace std;

bool isRunning = true;

int main()
{
	//testing stuff - testing my values to make sure they are correct - so far as i know :P
	//complex<double> complexNo(2.6611099E-03, 1.0695500E-02);
	//cout << complexNo;
	//cout << "The amplitude is " << abs(complexNo) << " and the phase is " << arg(complexNo) << "\n";
	//cout << "the polar is once again: " << polar(abs(complexNo), arg(complexNo));

	//create the file to output to
	ofstream outFile;
	outFile.open("outputc.dat");

	//gfrab the file im going to read from
	ifstream inFile;
	inFile.open("inputc.dat");

	string realPortion, imaginaryPortion;

	//read through the rows only while there is something to read
	while (inFile >> realPortion >> imaginaryPortion)
	{
		//cout << realPortion << "     " << imaginaryPortion;
		//cout << "\n";

		//translate c++ strings into doubles
		double realNo = stod(realPortion);
		double imgNo = stod(imaginaryPortion);

		complex<double> complex(realNo, imgNo);
		cout << complex;
		//use standard methods to calculate phase and amplitude and display them 
		cout << ":  The amplitude is " << abs(complex) << " and the phase is " << arg(complex) << "\n";
		cout << "outputting this to the 'outputc.dat file \n'";

		//now throw it into the file with a tab inbetween to make 2 columns
		outFile << abs(complex) << "	" << arg(complex) << endl;
	}

	while (isRunning)
	{

	}
    return 0;
}

