// Bank_Application.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;


class ATMpos
{
public:

	float amount, withdrawamount, Depositamount;
	int pinnumber; int ispinentered = pinnumber;
ATMpos(float amount, float withdraw,float Deposit, int pinno): amount(amount), withdrawamount(withdraw), Depositamount(Deposit),pinnumber(pinno)
	{
		
	}

	void  cashwithdraw()
	{
		pinnumber = 7324;
		cout << "Enter your pinnumber" << endl;
		cin >> pinnumber;
		bool iswithdrawamount = false;
		int counter;
		bool ispinentered = false;

		for (counter = 0000; counter < 3; ++counter)
		{
			cout << "Enter pin" << endl;
			cin >> pinnumber;

			if (pinnumber == 7324)
			{
				cout << "Welcome Mr Naveedsafi" << endl;
				cout << "Enter your amount:" << endl;
				cin >> withdrawamount;
				amount = amount - withdrawamount;
				cout << "your Reamining balance is:" << amount << endl;
				break;
			}
			else
			{
				iswithdrawamount = false;
			}
			if (iswithdrawamount == false)
			{
				cout << "you entered wrong pin" << endl;
			}
		}
}

	void cashdeposit()
	{
		cout << "Enter Pinnumber:" << endl;
		cin >> pinnumber;
		if (pinnumber == 7324)
		{
			cout << "WelcomeMr Naveedsafi" << endl;
			cout << "Enter your Deposit amount:" << endl;
			cin >> Depositamount;
		}
		else
		{
			cout << "You Entered wrong Pin" << "please enter correct pinnumber" << endl;
		}
		cout <<" Your Deposit amount:"<<Depositamount << endl;
		cout<<"Your amount added to your account sucessfully"<<endl;
		amount = amount + Depositamount;
		cout << "Your Totalbalance is:" << amount << endl;
	}
	void BalanceEnquriy()
	{
		cout << "Enter Pinnumber:" << endl;
		cin >> pinnumber;
		
		if (pinnumber == 7324)
		{
			cout << "WelcomeMr Naveedsafi" << endl;
			cout << "Your account balance is:" << amount << endl;
		}
		else
		{
			cout << "You Entered wrong Pin" << endl;
			cout << "please enter correct pinnumber" << endl;

		}
	}
	void Pinchange()
	{
		int OTP;
		string  customername,input;
		cout <<"Enter customername" << endl;
		cin >> input;
		if(customername == input)
		{
			cout << "WelcomeMr Naveedsafi" << endl;
			cout << "Please Enter new pinnumber" << endl;
			cin >> pinnumber;
			cout << "Please enter your 4 digit OTP" << endl;
			cin >> OTP;
			cout << "Your pinnumber updated sucessfully:" << endl;
		}
		else
		{
			cout << "You Entered  wrong customername" << endl;
			cout << "please enter correct customername" << endl;
		}

	}
	void getstatement()
	{ 
		
		int ispinentered = pinnumber;
		if (pinnumber == 7324)
		{
			cout << "WelcomeMr Naveedsafi" << endl;
			cout << "*Welcome ATMpos*" << endl;
			cout << "Your withdraw amount" << withdrawamount << endl;
			cout << "your deposit amount" << Depositamount << endl;
			cout << "******Thanks for Using******"<<endl;
		}
		else
		{
			cout << "You Entered wrong Pin" << endl;
			cout<<"*****Thanks For Using*****" << endl;
		}

	}
	void Exit()
	{
		cout << "*****Thanks For Using*****" << endl;
	}
	
};

int main()
{
	ATMpos obj(500.0,450.0,900.0,7324);
	cout << "Welcome To PF-L ATM" << endl;
	int cashwithdraw = 1;
	int cashdeposit = 2;
	int BalanceEnquriy = 3;
	int pinchange = 4;
	int getstatement = 5;
	int input;
	cout << "Enter input values" << endl;
	cin >> input;
	switch (input)
	{
	case 1:
		cout << "cashwithdraw" << endl;
		obj.cashwithdraw();
		obj.getstatement();
		break;
	case 2:
		cout << "cashdeposit" << endl;
		obj.cashdeposit();
		obj.getstatement();
		break;
	case 3:
		cout << "BalanceEnquriy" << endl;
		obj.BalanceEnquriy();
		obj.getstatement();
		break;
	case 4:
		cout << "pinchange" << endl;
		obj.Pinchange();
		break;
	case 5:
		cout << "getstatement" << endl;
		obj.getstatement();
		break;
		cout << "*****Thanks for using******" << endl;
	case 6:
		cout << "Exit" << endl;
		obj.Exit();
		break;
		system("pause");

	
		cout << "1.Cash Withdrawal" << endl;
		cout << "2.Cash Deposit" << endl;
		cout << "3.Balance Inquiry" << endl;
		cout << "4.pinchange" << endl;
		cout << "5.getstatement" << endl;
		cout << "6.Exit Mode" << endl;
	}
	
	

return 0;
}