#include<iostream>
using namespace std;

int Addition(int a, int b);

int main()
{
	int result = 0;
	result = Addition(7, 8);
	cout << "result:" << result<<endl;
	system("pause");
}

int Addition(int a, int b)
{
	int r = a + b;
	return r;
}