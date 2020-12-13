#include<iostream>
using namespace std;

class Distance
{
public:
	int meter;
public:
	Distance()
	{
		meter = 0;
	}
	Distance(int x)
	{
		meter = x;
	}
	void display()
	{
		cout << meter << endl;
	}
	friend int Distance1(Distance);
};
int Distance1(Distance D)
{
	D.meter = 9;
	return D.meter;
}
int main()
{
	Distance d;
	cout << Distance1(d);
	return 0;
}