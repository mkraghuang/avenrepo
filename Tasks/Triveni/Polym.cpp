// Polymorphisam.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


class Base
{
public:
	 void Fun()
	{
		cout << "base called" << endl;
	}
	 void print()
	{
		cout << "B called" << endl;
	}
};
class Derived :public Base
{
public:
	virtual void Fun()
	{
		cout << "Dervied called" << endl;
	}
	virtual void print()
	{
		cout << "D called" << endl;
	}
};

int main()
{
	Base *ptr = new Derived;
	ptr->Fun();
	ptr->print();
	
    return 0;
	system("pause");
}

