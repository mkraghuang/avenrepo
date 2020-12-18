#include "D_Header.h"
#include<iostream>
using namespace std;

void display1()
{
	cout << "from dll library" << endl;
}
void Addition(void)
{
	int x = 0;
	int y = 0;
	cout << "Addition:";
	cout << "Enter the numbers" << endl;
	cin >> x >> y;
	cout << (x + y) << endl;
}
void Subtraction(void)
{
	int x = 0;
	int y = 0;
	cout << "Subtraction:";
	cout << "Enter the numbers" << endl;
	cin >> x >> y;
	cout << (x - y) << endl;
}
void Multiply(void)
{
	int x = 0;
	int y = 0;
	cout << "Multiplication:";
	cout << "Enter the numbers" << endl;
	cin >> x >> y;
	cout << (x * y) << endl;
}
