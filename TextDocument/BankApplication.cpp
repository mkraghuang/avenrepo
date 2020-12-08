// Bank_Application.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;


class ATMpos
{
public:

	float amount=0.00, withdrawamount,Depositamount;
	string  customername, customerid;
	int pinnumber=7324, OTP,count=0;
	int ispinentered = pinnumber;
	
	

	ATMpos(float amount, string name, string id, int pinno): amount(amount),customername (name),customerid (id),pinnumber(pinno)
	{
		
	}

	void  cashwithdraw()
	{
		cout << "Enter your pinnumber" << endl;
		cin >> pinnumber;
		ispinentered = false;


		/*if (pinnumber == 7324)
		{
			cout << "Welcome Mr Naveedsafi" << endl;
			cout << "Enter your amount:" << endl;
			cin >> withdrawamount;
			amount = amount - withdrawamount;
			cout <<"your Reamining balance is:" << amount << endl;
		}

		else
		{

		cout <<"Your entered wrong  pinnumber" << endl;
		}
		*/
	
			int pin =3;
			while (count != 3)
				{
					
						if (pinnumber ==7324) 
						{
							cout << "Welcome Mr Naveedsafi" << endl;
							cout << "Enter your amount:" << endl;
							cin >> withdrawamount;
							amount = amount - withdrawamount;
							cout <<"your Reamining balance is:" << amount << endl;
							break;
						}
						else
						{
							cout << "Again Enter Your number" << endl;
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
							count+=+1;

							cout << "*****Maximum limits reached*****:" << "\n" << " *********please Try again*******" << endl;
							break;
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
		string input;
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
		ispinentered = pinnumber;
		if (pinnumber == 7324)
		{
			cout << "WelcomeMr Naveedsafi" << endl;
			cout << "*Welcome ATMpos*" << endl;
			cout << "Wecome Mr Naveedsafi" << endl;
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
	ATMpos obj(2000,"Naveedsafi","Abcd123",7234);
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