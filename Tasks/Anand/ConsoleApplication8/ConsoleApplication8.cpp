// ConsoleApplication8.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<Windows.h>
using namespace std;
#include"utils.h"
typedef int(*utils)(int, int);
int main()
{
	HMODULE hwnd = LoadLibraryA("Project2.dll");
	//second method global function
	utils fun1;
	fun1 = (utils)GetProcAddress(hwnd, "addition");
	cout << fun1(500, 500) << endl;
	//first method function pointer
	int(*fun)(int, int);
	fun = (int(*)(int,int))GetProcAddress(hwnd, "addition");
	cout << fun(100,200) << endl;


   /* cout << "from main" << endl;
	cout << addition(2, 3) << endl;*/
	FreeLibrary(hwnd);
	system("pause");
    return 0;
}

