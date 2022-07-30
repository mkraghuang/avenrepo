#include<iostream>
using namespace std;

void main()
{
	int a, b;
	cout << "Enter Two Numbers:";
	cin >> a >> b;

	int result = a < b ? a : b;

	cout << "Min Number is:" << result;

	system("pause");
}