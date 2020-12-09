#include<iostream>
using namespace std;
class Employee
{
public:
	int m_eno;
	char* m_ename;
	double m_esal;
public:
	Employee()
	{
		m_eno = 0;
		m_ename = new char;
		m_ename = '\0';
		m_esal = 00;
	}
	Employee(int eno, char* ename, double esal)
	{
		m_eno = eno;
		m_ename = new char[strlen(ename) + 1];
		strcpy(m_ename,ename);
		m_esal = esal;
	}
	Employee(const Employee &ob)
	{
		m_eno = ob.m_eno;
		m_ename = new char[strlen(ob.m_ename) + 1];
		strcpy(m_ename, ob.m_ename);
		m_esal = ob.m_esal;

	}
	Employee & operator=(const Employee &obj)
	{
		if (this !=NULL)
			delete[] m_ename;
		m_eno = obj.m_eno;
		m_ename = new char[strlen(obj.m_ename) + 1];
		strcpy(m_ename, obj.m_ename);
		m_esal = obj.m_esal;
		return *this;
	}
	~Employee()
	{
		if(m_ename=NULL)
		{
			delete[] m_ename;
			m_ename = NULL;
		}
		
	}
	void display()
	{
		cout << m_eno<<" " << m_ename<<" " << m_esal<<endl;
	}
};
int main()
{
	Employee obj(1000,"Raju",9000);
	Employee obj2(1001, "Suresh", 890000);
	obj2.display();
	Employee obj3(3000, "rani", 899898);
	Employee obj4 = (obj2,obj3);
	
	obj2.display();
	obj3.display();
	obj4.display();
	return 0;
}