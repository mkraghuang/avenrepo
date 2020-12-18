#include <iostream>
#include<string>
using namespace std;
class Location
{
	int x;
	int y;
public:
	Location()
	{
		x = y = 0;
	}
	Location(int x, int y)
	{
		this->x = x;
		this->y = y;
	}
	void setx(int x)
	{
		this->x = x;

	}
	void sety(int y)
	{
		this->y = y;
	}
	int getx()
	{
		return x;
	}
	int gety()
	{
		return y;
	}

};
class Person
{
	int id;
	string name;
	Location loc;
public:
	Person()
	{
		this->id = 1234;
		this->name = "anand";
	}
	Person(int id, string name, Location loc)
	{
		this->id = id;
		this->name = name;
		this->loc = loc;
	}
	void setid(int id)
	{
		this->id = id;
	}
	void setname(string name)
	{
		this->name = name;
	}
	void setlocation(int x,int y)
	{
		loc.setx(x);
		loc.sety(y);
	}
	int getid()
	{
		return id;
	}
	string getname()
	{
		return name;
	}
	Location getloc()
	{
		return loc;
	}
	void display()
	{
		cout << "id of the person" << id << endl;
		cout << "name of the person" << name << endl;
		cout << "location of the person" << loc.getx() <<loc.gety()<< endl;
    }
};

int main()
{
	Person p;
	p.setid(100);
	p.setname("anand");
	p.setlocation(240, 100);
	p.display();
	system("pause");

	return 0;
}