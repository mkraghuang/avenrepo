#include<iostream>
using namespace std;

int Addition(int a, int b)
{
	int result;
	result = a + b;
	return result;
}
float Addition(int a, int b, int c,int d)
{
	int res = a + b + c+d;
	return res;
}
double Addition(int a, int b,int c)
{
	int re = a + b + c;
	return re;
}
int main()
{
	float x,y,z;
	x = Addition(3, 4);
	cout << "int addition:" << x<<endl;
	y = Addition(2.1f,3.4f,5.9f,8.9f);
	cout << "float addition:" << y<<endl;
	z = Addition(4.543245, 8.83214,9.68432);
	cout << "double addition:" << z << endl;
	system("pause");
}

