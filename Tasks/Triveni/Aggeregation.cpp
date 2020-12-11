// Aggeregation.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<string>
using namespace std;


class address 
{
public:
	string city, state, locality;
	address( string city_c,string  state_c, string locality_c) :city(city_c), state(state_c), locality(locality_c)
		
	{
		
	}
};

class student {
	address*adrs;
public:
	int id;
	string name;
	student(int i, string nm, address*ad)
	{
		id = i; name = nm; adrs = ad;
	}
	void display()
	{
		cout << id << "  " << name << "  " << adrs->locality << "  " << adrs->city << "  " << adrs->state;
	}
};
void main()
{
	address a1 = address("C-146, Sec-15", "Noida", "UP");
	student s1 = student(101, "Nakul", &a1);
	s1.display();
}
