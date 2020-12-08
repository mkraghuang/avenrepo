// AbstractClass.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;

class Multiplex
{
public:
	/*string Screenname;
	int Ticketcounter;*/
	 virtual void shooping()= 0;
	 virtual void Gym() = 0;
	 virtual  void games() = 0;
};
class  Block1:public Multiplex
{
public:
	void shooping()
	{
		cout << "Choose what you want: " << endl;
	}
	void Gym()
	{
		cout << "Welcome to our Gymblock:" << endl;
	}
	void games()
	{
		cout << "Choose your games:" << endl;
	}

};
class Block2:public Multiplex
{
public:

	void shooping()
	{
		cout << "Choose what you want in Store: " << endl;
	}
	void Gym()
	{
		cout << "Welcome to our Gymblock2:" << endl;
	}
	void games()
	{
		cout << " pay &Choose your games :" << endl;
	}
};


int main()
{
	Multiplex *ptr = new Block1;
	ptr->shooping();
	ptr->Gym();
	ptr->games();

	cout << "Welocme to new Block:" << endl;

	
	Multiplex *ptr1 = new Block2;
	ptr1->shooping();
	ptr1->Gym();
	ptr1->games();


    return 0;
}

