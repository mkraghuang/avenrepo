#include<iostream>
using namespace std;
//#include"temp.h"
#include"utlis.h"
#include<Windows.h>
typedef int(*utlis)(int, int);

int main()
{
	/*cout << "Static  DLL Result" << endl;
	cout<<Addition(5,2) << endl;
	cout<<Subtraction(11, 15) << endl;
	cout<<Multiplication(2,3)<<endl;*/


	/*cout << "Dynamic DLL Result" << endl;
	cout << Add(5, 3) << endl;
	cout << Sub(12,15) << endl;
	cout << Multi(3,3) << endl;*/
	//Load Library
	HMODULE hwnd = LoadLibraryA("Project2.dll");
	//GetProcAddress 1st Method
	/*int(*fun)(int, int);
	fun= (int(*)(int, int))GetProcAddress(hwnd, "Add");
	cout << fun(5, 8)<<endl;

	int(*fun1)(int, int);
	fun1 = (int(*)(int, int))GetProcAddress(hwnd, "Sub");
	cout << fun1(5, 8) << endl;

	int(*fun2)(int, int);
	fun2 = (int(*)(int, int))GetProcAddress(hwnd, "Multi");
	cout << fun2(5, 8) << endl*/;


	//GetProc Address 2nd method
	utlis fun1;
	fun1  = (utlis)GetProcAddress(hwnd,"Add");
	cout << fun1(3, 7)<<endl;

	utlis Fun2;
	Fun2 = (utlis)GetProcAddress(hwnd, "Sub");
	cout << Fun2(7, 3) << endl;;
	utlis Fun3;
	Fun3 = (utlis)GetProcAddress(hwnd, "Multi");
	cout << Fun3(1, 9)<<endl;

	system("pause");
	FreeLibrary(hwnd);
}