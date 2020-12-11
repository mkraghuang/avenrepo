// Ref_Example.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;

int Addition(int a, int b)
{
	int&c = a;
	c = a + b;
	cout << c << endl;
	cout << &c << endl;
	cout << a << "\n" << b << endl;
	return 0;
}




int main()
{
	int x,y;
	cin >> x >> y;
	Addition(x,y);

	//int a = 0;
	//int b = 0;
	//cin >> a >> b;
	//int &c =b;
	////a = b;
	//c = a + b;
	//cout << c << endl;
	//cout << &c << endl;
	//cout << a << b << endl;
	//return 0;
}