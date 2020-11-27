#include <iostream>
#include <string>
using namespace std;

//Function Overriding
/*
class Base
{
public:
	void func()
	{
		cout << "base class func" << endl;
	}	
};
class Derived :public Base 
{
public:
	void func()
	{
		cout << "base class func" << endl;
	}
};
int main()
{
	Derived d1;
	d1.func();
	system("pause");
	return 0;
}

//virtual function
/*
class Basiccar
{
public:
	virtual void gears()
	{
		cout << "basic car function" << endl;
	}

};
class AdvanceCar : public Basiccar
{
public:
	void start() { cout << "AdvanceCar Started" << endl; }
};
int main()
{ 
	AdvanceCar d;
	Basiccar *p = &d;
	p->gears();
	system("pause");
}*/
/*program for obtaining polymorphism

*/
class car
{
public:
	virtual void start()
	{
		cout << "car started" << endl;
	}
};
class innova :public car
{
public:
	void start()
	{
		cout << "innova started" << endl;
	}
};
class swift :public car
{
public:
	void start()
	{
		cout << "swift started" << endl;
	}
};
int main()
{
	innova i;
	swift s;
	car *p = &i;
	p->start();
	p =&s;
	p->start();
	system("pause");
}
