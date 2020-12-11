#include<iostream>
using namespace std;
//program on ternary operations 
int main()
{
	int a, b;
	int max;
	cout << "enter two numbers:\n";
	cin >> a >> b;
	max=a>b ? a : b;
	cout << max << endl;
	system("pause");
	return 0;
}