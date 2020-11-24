#include<iostream>
using namespace std;

class Atm
{
private:
	int w_amount;
	int d_amount;
	float bal = 10000.00;

public:
	void Balance_Enquiry()
	{
		cout << "Balance Enqiry" << endl;
		cout << "Your Account Balance is:" << bal << endl;
		cout << "Thanks for coming dear user!" << endl;
		cout << "***************************************" << endl;
	}
	void Cash_Withdrawl()
	{
		cout << "Cash Withdraw ?" << endl;
		cout << "How much Amount U Want to Withdrawl ?:" << endl;
		cin >> w_amount;
		if (w_amount == bal)
		{
			cout << "Maintain Minimum Balance" << endl;
		}
		else if (w_amount > bal)
		{
			cout << "Insufficent Funds" << endl;
		}
		else
		{
			cout << "Cash withdraw:" << w_amount << endl;
			cout << "Remaining Available balance:" << bal-w_amount << endl;
		}
		cout << "Thanks for coming dear user!" << endl;
		cout << "***************************************" << endl;
	}
	void Deposit()
	{
		cout << "Enter Amount to Deposit:" << endl;
		cin >> d_amount;
		bal = bal + d_amount;
		cout << "Your Account Balance is:" << bal << endl;
		cout << "Thanks for coming dear user!" << endl;
		cout << "***************************************" << endl;
	}
};

int main()
{
	int pin,input;
	cout << "Welcome to PF-L ATM" << endl;
	cout << "Enter your 4-Digit Pin Code:" << endl;
	cin >> pin;
	Atm obj;
	do
	{
		cout << "What will you like to do today" << endl;
		cout << "1.Balance Enquiry" << endl;
		cout << "2.Cash Withdrawl" << endl;
		cout << "3.Cash Deposit" << endl;
		cout << "4.Exit Mode" << endl;
		cin >> input;
		switch (input)
		{
		case 1:
			obj.Balance_Enquiry();
			break;
		case 2:
			obj.Cash_Withdrawl();
			break;
		case 3:
			obj.Deposit();
			break;
		case 4:
			exit(0);
			break;
		default:
			cout << "Wrong Option" << endl;
			break;
		}
	} while (input != 4);

	system("pause");
	return 0;
}