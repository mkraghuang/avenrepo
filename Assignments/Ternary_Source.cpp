#include<iostream>
using namespace std;

int main()
{
	int a;
	int b;
	cout << "enter two numbers:" << endl;
	cin >> a;
	cin >> b;
	int max = a > b ? a : b;
	cout << "Maximum value = " << max <<endl;
	system("pause");
	return 0;
	
}