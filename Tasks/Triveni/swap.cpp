// swap.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;



int main()
{
	int a = 3, b = 4;

		cout << "Before swapping a & b values are:"<<"\n" << a<<"\n"<< b << endl;

	swap(a, b);

		cout << "After swapping a & b values are:" <<"\n"<< a <<"\n"<< b << endl;

    return 0;
}

