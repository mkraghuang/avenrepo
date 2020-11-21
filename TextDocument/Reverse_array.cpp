// Reverse_array.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;




int main()
{
	int a[5] = { 1,2,3,4,5 };
	// size of array//
	cout << "The size of array is:" << sizeof(a) << endl;
	//value at diffrent address//

	cout << "value at a[0]:" << a[0] << endl;
	cout << "value at a[1]:" << a[1] << endl;
	cout << "value at a[2]:" << a[2] << endl;
	cout << "value at a[3]:" << a[3] << endl;
	cout << "value at a[4]:" << a[4] << endl;
	//for displaying i value//

	/*for (int i = 0; i > 5; i++)
	{
		cout << i << endl;
	}*/

	//*****reverse string*****//

	for (int i = 5; i > 0; i--)
	{
		cout << i << endl;
	}
    return 0;
}

