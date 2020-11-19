#include<iostream>

using namespace std;

void main()
{
	int a, b,temp;
	cout << "Enter Two number:";
	cin >> a >> b;

	cout << "Swaping two numbers:"<<endl;
		 temp = a;
		a= b;
		b = temp;

		cout << a<<endl << b;
		system("pause");
}
