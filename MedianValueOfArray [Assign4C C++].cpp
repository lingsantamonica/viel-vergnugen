// Assign4A.cpp : This file contains the 'main' function. Program execution begins and ends there.
//





//YUNPENG LING
//CS 52, Section 4118
//Assignment #4, Problem #C

//This program return the median value of array


#include "pch.h"
#include <iostream>
#include <algorithm>
 #include <cmath>
 #include <cassert>

using namespace std;



double med(int* a, int b) {
	

	if (b % 2 == 0) {

		return (a[b / 2] + a[(b - 1) / 2]) / 2.0;

	}
	else {
		//If the array does not contain even value of member variables
		//Use the build in sort function to sort the array first
		sort(a, a + b);
		return (a[b / 2] + a[(b - 1) / 2]) / 2.0;


		}
	

}


int main()
{


	const int SIZEA = 3;
	int arrayA[SIZEA] = { 4,8,2 };

	const int SIZEB = 4;
	int arrayB[SIZEB] = { 4,8,9,3 };

	cout << "The median of array A is: " << med(arrayA, SIZEA) << endl;
	cout << "The median of array A is: " << med(arrayB, SIZEB) << endl;

}
