// Password.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;


int main()
{
	int pinnumber, counter;
	bool withdraw = false;
	for (counter=0000;counter< 3;++counter)
	{
		cout << "Enter pin" << endl;
		cin >> pinnumber;
		if (pinnumber ==7324)
		{
			withdraw = true;
			cout << "money withdraw" << endl;
			break;
		}
		else
		{
			withdraw = false;
		
		}

	}
	if (withdraw ==  false)
	{
		cout << "you entered wrong pin" << endl;
	}

	
	return 0;
}