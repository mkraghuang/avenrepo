// ternary.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;



int main()
{
	int Number1, Number2, Result;
	cin >> Number1 >> Number2;
	Result = Number1 + Number2;
	cout << "Result is:" << Result << endl;

	/*if (Result > 0)
	{
		cout << "Postive";
	}
	else
	{
		cout << "negative";
	}*/
	Result > 0 ? cout << "The result is postive\n" : cout << "The Result is Negitive:\n" << endl;
    return 0;
	
}

