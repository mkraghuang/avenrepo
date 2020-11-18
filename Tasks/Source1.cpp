#include<iostream>
using namespace std;

int main()
{
	int val = 10;
	int *ptr;

	ptr = &val;
	cout << "val is:" << val<<endl;
	cout << "val is:" << *ptr<<endl;

	val = 20;
	cout << "changed Val is:"<< val<<endl;
	cout << "Changed val is:"<< *ptr<<endl;

	*ptr = 30;
	cout << "changed Val is:" << val << endl;
	cout << "Changed val is:" << *ptr << endl;
	cout << "Address of val:" << &val << endl;
	system("pause");
	return 0;
}