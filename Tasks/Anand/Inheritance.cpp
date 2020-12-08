#include<iostream>
#include<string>
using namespace std;
int pin;
class Coustomerdetails
{
	string c_name;
	string c_bank;
public:
	Coustomerdetails() // default constructor
	{
		c_name = "anand";
		c_bank = "boosterbank";
	}
		Coustomerdetails(string cname, string cbank) :c_name(cname), c_bank(cbank)
		{
			//parametarized constructor
		}
	void setcname(string c_name)
	{
		this->c_name = c_name;
	}
	void setcbank(string c_bank)
	{
		this->c_bank = c_bank;
	}
	
	string  getcname()
	{
		return c_name;
	}
	string getcbank()
	{
		return c_bank;
	}
	/*float getcbal()
	{
		return c_balance;
	}*/
	~Coustomerdetails() // default constructor
	{

	}
};
class Indianbank :public Coustomerdetails
{
private:
	long Ac_no;
	float C_balance;
public:
	Indianbank()//default constructor
	{
		Ac_no =1234;
	}
	Indianbank(long ac_no, float c_balance) :Ac_no(ac_no),C_balance(c_balance)//parametarized constructor
	{
	}
	void setacno(long Ac_no)
	{
		this->Ac_no = Ac_no;
	}
	int getacno()
	{
		return Ac_no;
	}
	void setcbal(float C_balance)
	{
	this->C_balance = C_balance;
	}
	float getcbal()
	{
	return C_balance;
	}
	void Accountdetails()
	{
		cout << "your account number is:"<<getacno()<< endl;
		cout << "HAI MR/MS" << "\n" << endl;
	
		cout << "your name is:" <<getcname() << endl;;
		cout << "your bank is" << getcbank() << endl;


	}
	void Balenquiry()
	{
		cout << "balance in your account is:" << getcbal() << endl;
	}
	void cashdeposit(float amount)
	{
		cout << "total balance is" << getcbal() << endl;
		C_balance = C_balance + amount;//error
		cout << "Total deposited Amount Is" << amount << endl;
		cout << "\n" << endl;
		cout << "total balance  after deposition in your account is:" << C_balance << "\n" << endl;
	}

	void cashwithdraw(int amount)
	{
		if (amount >  C_balance)
			cout << "Insufficient funds" << endl;
		else
			C_balance = C_balance - amount; //error
		cout << "total balance after withdrawl in your account is:" << C_balance << endl;
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
		if (pin ==1234)
		{
			cout << "PIN entry successful." << endl;
			cout << "******************************" << endl;
			cout << "WELCOME TO INDIAN BANK ATM" << endl;
			Indianbank ind;
			ind.setcname("anand");
			ind.setcbank("indian");
			ind.setcbal(5000);
			ind.setacno(1234567);
			ind.Accountdetails();
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
					ind.Accountdetails();
					break;
				case 2:
					cout << "balance enquiry\n";
					ind.Accountdetails();
					ind.Balenquiry();
					break;
				case 3:
					float depo;
					cout << "cash Deposit\n";
					cout << "how much amount u have to deposit:";
					cin >> depo;
					ind.cashdeposit(depo);
					break;
				case 4:
					int wdraw;
					cout << "cash withdraw\n";
					cout << "how much amount u want to withdraw:";
					cin >> wdraw;
					ind.cashwithdraw(wdraw);
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




