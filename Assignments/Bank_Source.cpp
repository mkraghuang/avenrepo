#include<iostream>
using namespace std;

int main()
{
	int pin;
	float bal = 10000.00;
	int input;
	
	cout << "Welcome To PF-L ATM" << endl;
	cout << "Enter your 4-Digit PIN code:" << endl;
	cin >> pin;
	do {
		cout << "What will you like to do today" << endl;
		cout << "1.Balance Enquiry" << endl;
		cout << "2.Cash Withdrawl" << endl;
		cout << "3.Cash Deposit" << endl;
		cout << "4.Exit Mode" << endl;
		cin >> input;
		switch (input)
		{
		case 1:
			cout << "Balance Enquiry" << endl;
			cout << "your account balance is:" << bal << endl;
			cout << "Thanks gor coming dear user!" << endl;
			cout << "*****************************************************************" << endl;
			break;
		case 2:
			int w_amount;
			cout << "Cash withdrawl ?" << endl;
			cout << "How Much Amount You Want To Withdrawl ?" << endl;
			cin >> w_amount;
			if (w_amount > bal)
			{
				cout << "Insuffiecent Funds" << endl;
			}
			else if(w_amount==bal)
			{
				cout << "Maintain minimum Balance" << endl;
			}
			else
			{
				cout << "Your Withdraw:" << w_amount << endl;
				cout << "Your Remaing Available Balance is:" << bal - w_amount << endl;
			}
			cout << "Thanks gor coming dear user!" << endl;
			cout << "*****************************************************************" << endl;
			break;
		case 3:
			int d_amount;
			cout << "Cash Deposit ?" << endl;
			cout << "How Much Amount You Want To Deposit ?" << endl;
			cin >> d_amount;
			if (d_amount > 0)
			{
				cout << "Cash Deposit:" << d_amount << endl;;
				cout << "Your Remaing Available Balance is:" << d_amount + bal << endl;
				cout << "Thanks gor coming dear user!" << endl;
				cout << "*****************************************************************" << endl;
			}
			break;
		case 4:
			exit(0);
			break;
		default:
			cout << "Choose Correct Option" << endl;
			cout << "*****************************************************************" << endl;
			break;
		}
	} while (input != 4);
	system("pause");
	return 0;
}