#include<iostream>
using namespace std;
//programs on ternary operations,switch,if else,pointers


//if else

int main()
{
	int year;
	cout << "enter year:";
	cin >> year;
	if (year % 4 == 0)
	{
		if (year % 100 == 0)
		{
			if (year % 400 == 0)
			{
				cout << "this year :" << year << " is a leap year" << endl;
			}

		}
		else
			cout << "this year:" << year << " is a leap year" << endl;
	}
	else
		cout << "this year:" << year << " is not a leap year" << endl;
	system("pause");
	return 0;
}



//switch:
void display1()
{
cout << "i got first rank" << endl;
}
void display2()
{
cout <<"i got second rank"<< endl;
}
void display3()
{
cout << "i got third rank" << endl;
}
int main()
{
int input;
cout << "1.display1 \n";
cout << "1.display2 \n";
cout << "1.display3 \n";
cin >> input;
switch (input)
{
case 1:display1();
break;
case 2:display2();
break;
case 3:display3();
break;
default:
cout << "your student got no rank sorry" << endl;
break;
return 0;
}

//biggest of three numbers
int main()
{
	int a, b, c;
	int max;
	cout << "enter three numbers:\n";
	cin >> a >> b >> c;
	max = a > b&&a > c ? a : b > c ? b : c;
	cout << max << endl;
	return 0;
}
//biggest of two numbers
int main()
{
int a, b;
int max;
cout << "enter two numbers:\n";
cin >> a >> b;
max=a>b ? a : b;
cout << max << endl;

system("pause");
return 0;
}
//pointers
int main()
{
	int a = 10;
	int *p = &a;

	cout << a << endl;
	cout << *p << endl;
	cout << &a << endl;
	cout << p << endl;
	cout << &p << endl;

	system("pause");
	return 0;
}
int main()
{
	int size;
	cout << "enter the no of elements\n";
	cin >> size;
	int a[size];
	cout << sizeof a << endl;

	system("pause");
	return 0;
}
int main()
{
	int a[] = {2,4,3,5,6};
	int *p = a;
	int *q = &a[4];
	cout << *p << endl;
	cout << endl;
	p++;
	cout << *p << endl;
	p--;
	cout << *p << endl;
	p = p + 2;
	cout << p << endl;
	cout << *p << endl;
	cout << *q << endl;
	cout << p-q << endl;
	cout << q-p << endl;
	return 0;

}


