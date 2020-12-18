// RuntimePoly.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;


class Employee
{
public:
	string name;
	int id;
	virtual void Emp()
	{
		cout << "Enter Employee Name:" << endl;
		cin >> name;
		cout << "Enter Employee Id:" << endl;
		cin >> id ;
	}
	virtual void Empdisplay()
	{
		cout << name << id<<endl;
	}
	
};
class Developer:public Employee
{
public:
	int projectno;
	string projectname;
	void Emp()
	{
		Employee::Emp();
		cout << "Enter project no:" << endl;
		cin >> projectno;
		cout << "Enter project Name:" << endl;
		cin >> projectname;
	}
	void Empdisplay()
	{
		Employee::Empdisplay();
		cout << projectno << "\n" << projectname << endl;
	}

};
class Tester:public Employee
{
public:

	int  manaultesterdefects;
	int automationtesterdefects;
	void Emp()
	{
		Employee::Emp();
		cout << "manaultesterdefects no:" << endl;
		cin >> manaultesterdefects;
		cout << "automationtesterdefects no:" << endl;
		cin >> automationtesterdefects;
	}
	void Empdisplay()
	{
		Employee::Empdisplay();
		cout << manaultesterdefects << "\n" << automationtesterdefects << endl;
	}

};

int main()
{ 
	Employee *ptr = new Developer;
	ptr->Emp();
	ptr->Empdisplay();
	Employee *ptr1 = new Tester;
	ptr1->Emp();
	ptr1->Empdisplay();
	return 0;
	system("pause");
	
    return 0;
}

