#include<iostream>
using namespace std;

void Swap(int x, int y)
{
	int temp;
	temp = x;
	x = y;
	y = temp;
	cout << "After Swaping" << endl;
	cout << "a:" << x << endl << "b:" << y << endl;
}
int main()
{
	int a = 3;
	int b = 4;
	cout << "Before Swaping" << endl;
	cout << "a:" << a <<endl << "b:"<<b << endl;
	Swap(a, b);
	system("pause");
}