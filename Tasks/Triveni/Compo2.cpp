// Compo2.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;



class  Birthday
{
public:
	int date, month, year;
public:
	Birthday(int d, int m, int y) :date(d), month(m),year(y)
	{

	}
	void print()
	{
		cout <<"date:"<< date<<"\n"<<"month:"<< month<<"\n"<<"year:"<< year<<"\n"<< endl;
	}

};
class People
{
public:
	string name;
	Birthday dateofbirth;
	
	People(string n, int date,int month,int year):name(n), dateofbirth(date, month, year)
	{
		
	}
	
	void printdetails()
	{
		cout <<"name:"<<name <<"\n"<<"date:"<<dateofbirth.date<<"\n"<<"month:"<<dateofbirth.month<<"\n"<<"year"<<dateofbirth.year << endl;
	}
};
int main()
{
	Birthday B(12,2,1997);
	People P1("raju",3,2,1998);
	P1.printdetails();
	B.print();
    return 0;
}