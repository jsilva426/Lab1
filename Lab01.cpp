// Lab01.cpp : Reads a text file and counts numbers, as well as tells the first two and last two numbers in the file
//Jacob Silva
//Cosc 2030
//9-17-18

#include "stdafx.h"
#include <iostream>
using std::cin;
using std::cout;
using std::endl;
#include <string>
#include <fstream>
using std::ofstream;
using std::ifstream;
using std::getline;
using std::string;

int main()
{
	double first=0, second=0, secLast=0, last=0; //The numbers in which the program will return
	int count=0;
	double a,buffer1=0,buffer2=0;
	string inBuf;
	ifstream inFile;
	ofstream outFile;
	cout << "Please Enter a filename. Count, First, Second, Second to Last, and Last numbers will be returned:" << endl;
	getline(cin, inBuf);
	inFile.open(inBuf);
	while (inFile >> a)	//Process in which numbers are stored
	{
		if (!inFile.fail())
		{
			count++;
			if (count == 1)
			{
				first = a;
			}
			if (count == 2)
			{
				second = a;
			}
			buffer2 = buffer1;
			buffer1 = a;
			

		}

	}
	inFile.close();
	secLast = buffer2;
	last = a;
	cout <<"The Count: "<< count << endl<<"The First #: " << first << endl<<"The Second #: " << second<<endl<<"The Second to Last #: "<<secLast<<endl<<"The Last #: "<<last<<endl;
    return 0;
}

