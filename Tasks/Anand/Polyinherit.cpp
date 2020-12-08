#include<iostream>
using namespace std;
class BIKES
{
public:
	virtual void name()
	{
		cout << "display function of class A" << endl;
	}
	 int getgears()
	{  
		cout << "gears " << endl;
		return 4;
	}
};
class CC125:public BIKES
{
public:
	void name()
	{
		cout << "bike name is cc125" << endl;
	}
	 int getgears()
	{
		cout << "gears numbers is" << 5 << endl;
		return 4;
	}
	
};
class CC150 :public BIKES
{
public:
	void name()
	{
		cout << "bike name is cc150" << endl;
	}
	virtual int getgears()
	{
		cout << "gears numbers is" << 2 << endl;
		return 2;
	}
	
};
BIKES* getgears(int a)
{
	switch (a)
	{
		BIKES *ptr;
	case 1:ptr = new CC125();
		break;
	case 2:ptr = new CC150();
		break;		

		return ptr;
	}
	
}

int main()
{
	BIKES *ptr = getgears(2);
	ptr->name();
	ptr->getgears();
	//BIKES *p = new CC125();
	//p->name();
	//p->getgears();
    system("pause");
	return 0;
}
