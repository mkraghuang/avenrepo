#include<iostream>
#include<string>
using  namespace std;
int pin;
class Coustomerdetails
{
	string c_name;
	string c_bank;
	float c_balance;
public:
	Coustomerdetails() // default constructor
	{
		c_name = "anand";
		c_bank = "boosterbank";
		c_balance = 20000.0;
	}
	Coustomerdetails(string cname,string cbank,float cbalance):c_name(cname),c_bank(cbank),c_balance(cbalance)
	{
		//parametarized constructor
	}
	void setcname(string c_name)
	{
		this->c_name =c_name;
	}
	void setcbank(string c_bank)
	{
		this->c_bank =c_bank;
	}
	void setcbal(float c_balance)
	{
		this->c_balance =c_balance;
	}
	string  getcname()
	{
		return c_name;
	}
	string getcbank()
	{
		return c_bank;
	}
	float getcbal()
	{
		return c_balance;
	}
};
class Indianbank 
{
private:
	long Ac_no;
	Coustomerdetails Coust;

public:
	Indianbank()//default constructor
	{
		Ac_no = 1234;

	}
	Indianbank(long ac_no, Coustomerdetails coust) :Ac_no(ac_no), Coust(coust)//parametarized constructor
	{
	}
	void setacno(long Ac_no)
	{
		this->Ac_no = Ac_no;
	}
	void setcoustdetails(string cname, string cbank, float cbalance)
	{
		Coust.setcname(cname);
		Coust.setcbank(cbank);
		Coust.setcbal(cbalance);

	}
	int getacno()
	{
		return Ac_no;
	}
	Coustomerdetails getcoustdetails()
	{
		return Coust;
	}
	void Accountdetails()
	{
     	cout << "HAI MR/MS" << "\n" << Coust.getcname() << endl;
		cout << "your account details are \n" << endl;
		cout << "******************************" << endl;
		cout << "your name is:" << Coust.getcname() << endl;;
		cout << "your bank is" << Coust.getcbank() << endl;
		Coust.setcbal(50000);		
		cout << "balance in your account is" << Coust.getcbal() << endl;		
	}
	void Balenquiry()
	{

		cout << "total balance in your account is:" << Coust.getcbal()<< "\n" << endl;
	}
	
};
int main()
{
	int pinattempt = 3;
	int choice;
	while (pinattempt > 0)
	{
		cout << "Please enter your PIN." << endl;
		cin >> pin;
		Indianbank ind;
		ind.setcoustdetails("anand", "indianbank", 10000);
		if (pin == 1234)
		{
			ind.setacno(1234567890);
			cout << "your account number is" << ind.getacno() << endl;
			cout << "PIN entry successful." << endl;
			cout << "WELCOME TO INDIAN BANK ATM" << endl;
			do
			{
				cout << "\n\tSelect one option below ";
				cout << "\n\t1 Accountdetails";
				cout << "\n\t2 Balance Enquiry";
				cout << "\n\t3 Exit\n";
				cout << "please enter your option:";
				cin >> choice;
				switch (choice)
				{
				case 1:
					cout << "open an account\n";
					ind.Accountdetails();
					break;
				case 2:
					cout << "balance enquiry\n";
					ind.Balenquiry();
					break;				
				case 3:
					exit(0);
					break;
				default:
					cout << "please enter the valid option\n";
					break;
				}
			} while (choice !=3);
		}
		else
		{
			cout << "Wrong PIN.Please try again." << endl;
			pinattempt--;
			cout << "\nRemaining PIN Attempt chances:" << pinattempt << endl << endl;
		}
		if (pinattempt == 0)
		{
			cout << "You have exceeded the PIN attempt.Goodbye" << endl;
		}
	}
system("pause");
	return 0;
}
