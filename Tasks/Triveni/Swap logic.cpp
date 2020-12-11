// Swap logic.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;



int main()
{
	int a[5] = { 1,2,3,4,5 };
	int n = 5;
	cout << "Before swapping array elements:" << endl;
	cout << a[0] << a[1] << a[2] << a[3] << a[4] << endl;
	//******1st iteration******//
	for (int i = 0; i < n / 2; i++)			
		{
		a[i] = a[i] + a[n - 1 - i];
		//a[0]=a[0]+a[5-1-0]
		//a[0]=1+a[4]
		//a[0]=1+5;
		//a[0]=6;
		a[n - 1 - i] = a[i] - a[n - 1 - i];
		//a[5-1-0]=a[0]-a[5-1-o]
		//a[4]=6-a[4]
		//a[4]=6-5
		//a[4]=1;

		a[i] = a[i] - a[n - 1 - i];
		//a[0]=a[0]-a[5-1-0]
		//a[0]=a[0]-a[4]
		//a[0]=6-1
		//a[0]=5
		}
	cout << "after swapping array elements are:" << endl;
	cout << a[0] << a[1] << a[2] << a[3] << a[4] << endl;
	//******2nd iteration******//
	////for(i=1
	//a[i] = a[i] + a[n - 1 - i];
	////a[i]=a[1]+a[5-1-1]
	////ai]=2+a[3]
	////a[i]=2+4;
	////a[i]=6;
	//a[n - 1 - i] = a[i] - a[n - 1 - i];
	////a[5-1-1]=a[i]-a[5-1-1]
	////a[3]=6-a[3]
	////a[3]=6-4
	////a[3]=2;
	//a[i] = a[i] - a[n - 1 - i];
	////a[i]=a[i]-a[5-1-1]
	////a[1]=a[i]-a[3]
	////a[1]=6-2
	////a[1]=4

	
    return 0;
}

