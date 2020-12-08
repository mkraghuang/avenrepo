// Today.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
using namespace std;



int main()

{
	int deposit = 0;
	int amount = 100;
	int withdraw = 0;
	int pinnumber = 0;
	cout << "Welcome To PF-L ATM" << endl;
	cout << "Enter Your Pin Number" << endl;
	cin >> pinnumber;
	cout << "Welcome Mr.Naveed Safi...!!" << endl;
	if (pinnumber == 7234)
	{
		cout << "What will you like to do today" << endl;
		cout << "1.Balance Inquiry" << endl;
		cout << "2.Cash Withdrawal" << endl;
		cout << "3.Cash Deposit" << endl;
		cout << "4.Exit Mode" << endl;
	}
	else
	{
		cout << "Please Enter your correct PinNumber:" << endl;
	}
	cout << "BalanceInquiry" << endl;
	int BalanceInquiry=1;
	int cashwithdrawal = 2;
	cin >> BalanceInquiry;
	switch (BalanceInquiry)
	{
	case 1:
		cout << "1.Balance Inquiry" << endl;
		break;
	case 2:
		cout << "2.cashwithdrawal" << endl;

	
	}
		cout << "Your Account Balance is:10000" << endl;
		cout << "Thanks for comming Dear!:" << endl;
		cout << "*****************" << endl;

		cout << "1.Balance Inquiry" << endl;
		cout << "2.Cash Withdrawal" << endl;
		cout << "3.Cash Deposit" << endl;
		cout << "4.Exit Mode" << endl;
		cout << "BalanceInquiry" << endl;
		int withdrawal = 2000;
		int RAB = 8000;
		cin >> cashwithdrawal;


		
		cout << "cash withdrawal?" << endl;
		cout << "How much Amount you want To withdrawal?" << endl;
		

		
		
		
		cout << "Your withdraw" <<withdrawal<< endl;
		cout << "Your Remaining Account Balance is:"<<RAB<< endl;
		cout << "Thanks for comming Dear!:" << endl;
		cout << "*****************" << endl;



		cout << "1.Balance Inquiry" << endl;
		cout << "2.Cash Withdrawal" << endl;
		cout << "3.Cash Deposit" << endl;
		cout << "4.Exit Mode" << endl;
		cout << "BalanceInquiry" << endl;


    return 0;
}

