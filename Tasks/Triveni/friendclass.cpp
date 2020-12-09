#include<iostream>
using namespace std;
//forward Declaration
class Student;

class Student
{
public:
	int m_eno;
	char* m_name;
	Student(int eno,char* name):m_eno(eno),m_name(name){}
	void display()
	{
		cout <<"Student Number"<< m_eno << "Student Name " << m_name << endl;
	}
	friend class Subject;
};
class Subject
{
public:
	int MathsMarks,Sciencemarks;
	Subject(int  M,int S):MathsMarks(M), Sciencemarks(S){}
	void Display()
	{
		cout << MathsMarks << " " << Sciencemarks << endl;
	}

};
int main()
{
	Student obj(1000, "Rajesh");
	obj.display();
	Subject obj1(90,70);
	obj1.Display();
	//obj1.Display();
	
}