#include<iostream>
#include<string>
using namespace std;
int pin;
class Indianbank
{
private:

	long Ac_no;
	string Name;
	string Coust_id;
	float Tamount;
public:
	Indianbank()//default constructor
	{
		Ac_no = 1234;
		Name = "xxxxxxxxx";
		Coust_id = "B56RET8Y";
		Tamount = 10000;
	}
	Indianbank(long ac_no, string name, string cid, float tamount) :Ac_no(ac_no), Name(name), Coust_id(cid), Tamount(tamount)
	{
	}
	void Accountdetails()
	{
     	cout << "HELLO MR/MS" << "\n" << Name << endl;
		cout << "your name is:" << Name << endl;;
		cout << "your coustid is" << Coust_id << endl;
		cout << "your account number is" << Ac_no << endl;
		cout << "the amount in your account is" << Tamount << endl;
		cout << "you have successfully created your account" << endl;
		cout << "******************************" << endl;
	}
	void Balenquiry()
	{

		cout << "total balance in your account is:" << Tamount << "\n" << endl;
	}
	void cashdeposit(float amount)
	{
		cout << "total balance is" << Tamount;
		Tamount = Tamount + amount;
		cout << "Total deposited Amount Is" << amount << endl;
		cout << "total balance in your account is:" << Tamount << "\n" << endl;

	}
	void cashwithdraw(int amount)
	{		
			if (amount >Tamount)
			
				cout << "Insufficient funds" << endl;
				//cout << "please enter the amount with in the range of your total amount" << endl;
			else
				Tamount = Tamount - amount;
			cout << "total balance in your account is:" << Tamount<<endl;
		}
	
};
int main()
	{
	Indianbank ind1(123456789, "kiran", "BDIPM456", 10000);
	int pinattempt=3;
	int choice;
	while (pinattempt>0)
	{
		cout << "Please enter your PIN." << endl;
		cin >> pin;
		if (pin ==1234)
		{
			cout << "PIN entry successful."<< endl;
			cout << "WELCOME TO INDIAN BANK ATM" << endl;
			do
			{
				cout << "\n\tSelect one option below ";
				cout << "\n\t1 Accountdetails";
				cout << "\n\t2 Balance Enquiry";
				cout << "\n\t3 cash Deposit";
				cout << "\n\t4 cash Withdrawal";
				cout << "\n\t5 Exit\n";
				cout << "please enter your option:";
				cin >> choice;
				switch (choice)
				{
				case 1:
					cout << "open an account\n";
					ind1.Accountdetails();
					break;
				case 2:
					cout << "balance enquiry\n";
					ind1.Balenquiry();
					break;
				case 3:
					float depo;
					cout << "cash Deposit\n";
					cout << "how much amount u have to deposit:";
					cin >> depo;
					ind1.cashdeposit(depo);
					break;
				case 4:
					int wdraw;
					cout << "cash withdraw\n";
					cout << "how much amount u want to withdraw:";
					cin >> wdraw;
					ind1.cashwithdraw(wdraw);
					break;
				case 5:
					exit(0);
					break;
				default:
					cout << "please enter the valid option\n";
					break;
				}
			} while (choice != 5);

		}
		else
		{
			cout << "Wrong PIN.Please try again." << endl << endl;
			pinattempt--;
			cout << "\nRemaining PIN Attempt chances:"<< pinattempt << endl << endl;
		}
		if (pinattempt == 0)
		{
			cout <<"You have exceeded the PIN attempt.Goodbye"<<endl;
		}
	}
	system("pause");
	return 0;
}