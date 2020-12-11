#include<iostream>
using namespace std;
int add(int a, int b)
{
	return a * b;
}
int main()
{
	int result = 0;

	cout << "form main" << endl;
	result = add(2, 3);
	cout << result << endl;
	int temp = 52;
	if (result == 6)
	{
		cout << "the result is equal to temp" << endl;
	}
	else
	{
		cout << "the result is 52 "<< endl;
	}
	if(result>0)
	{
		cout << "the result is greater than zero" << endl;
	}
	else
	{
		cout << "the result is less than zero " << endl;
	}
	if (result>temp)
	{
		cout << "the result is greater than " <<temp<< endl;
	}
	else
	{
		cout << "the result is less than  " <<temp<< endl;
	}
	system("pause");

	return 0;
}