#include<iostream>
#include<string>
using namespace std;
int input,amount;
float bal;
float totalbalance = 10000.00;
void Deposit(float amount)
{
	totalbalance =totalbalance+ amount;
	
}
int cashwithdrawl(int amount)
{
	
	if (totalbalance-amount <=500)
		cout << "u have to maintain minimum balance ";
		bal= bal -amount;
	return bal;
}
void Balanceenquiry()
{
	cout << "balance is" << totalbalance << endl;

}

int main()
{
	cout << "welcome to my booster bank\n";
	int pin;
	string name;
	int acc,arr;
	cout << "please enter your pin number:";
	cin >> pin;    
	cout << "enter your name:";
	cin >> name;
	do {
		cout << "select one of these services:\n";
		cout << "1.Balanceenquiry\n";
		cout << "2.Deposit\n";
		cout<<  "3.cashwithdrawl\n";
		cout << "4.exitmode\n";


		cin >> input;
		switch (input)
		{
		case 1:Balanceenquiry();
			break;
		case 2:
			cout << "Enter amount:";
			cin >> amount;
			Deposit( amount);
			cout << "Amount is Deposited" <<amount<< endl;
			break;
		case 3:
			cout << "enter amount:";
			cin >> amount;
			cashwithdrawl(amount);
			cout << "Amount withdrawl is" << amount << endl;
			break;

		case 4:exit(0);
			break;
		default:
			cout << "thanking you for banking with us" << endl;
			break;
		}
	} while (input != 4);
	system("pause");
	return 0;

}
