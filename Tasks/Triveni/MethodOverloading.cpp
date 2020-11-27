// Poly2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace  std;

class Addition
{
public:
	virtual int Total(int m1,int  m2)
	{
		cout << "Totalmarks is" << m1 + m2 << endl;
		return 0;
	}
	 int Total2(int m1, int m2, int m3, int m4)
	{
		cout << "Total2 marks is:" << m1 + m2 + m3 + m4 << endl;
		return 0;
	}
};
class Subtraction:public Addition
{
public:
	int Total(int m1, int m2)
	{
		cout <<"Subtarction Total is:"<<m1 - m2 << endl;
		return 0;
	}
	virtual int Total2(int m1, int m2, int m3, int m4)
	{
		cout << "Subtraction Result is::" << m1 - m2 - m3 - m4 << endl;
		return 0;
	}
};



int main()
{
	Addition *Ptr=new Subtraction;
	Ptr->Total(10,70);
	Ptr->Total2(20,60,50,70);

    return 0;
	system("pause");
}

