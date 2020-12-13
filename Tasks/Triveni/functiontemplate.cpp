#include<iostream>
using namespace std;

template<typename T>
T maximum(T a, T b)
{
	
	return (a > b) ? a : b;
}
int main()
{
	int a1,b1;
	cout << "ENTER TWO NUMBERS" << endl;
	cin >> a1 >> b1;
	cout << maximum(a1, b1)<<"is Bigger value"<< endl;
	return 0;
}