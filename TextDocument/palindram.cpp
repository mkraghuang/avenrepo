// palindram.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;




int main()
{
	int a[5] = { 1,2,3,2,1 };
	int n = 5;
	int flag = 0;
	cout << sizeof(a) << endl;

	for (int i = 0; i < n / 2; i++)
	{
		if (a[i] != a[n - 1 - i])
		{
			flag = 1;
			
		}
		if (flag == 0)
		{
			cout << "then it is palndrom" << endl;
			break;
		}
		else
		{
			cout << "then is not a palndrom" << endl;
			break;
		}
	}
	
	return 0;
	
}