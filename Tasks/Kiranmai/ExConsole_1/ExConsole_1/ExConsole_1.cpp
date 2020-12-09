// ExConsole_1.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include "D_Header.h"
#include<Windows.h>

using namespace std;
typedef int(*fun1);

int main()
{
	HMODULE hwnd = LoadLibraryA("ExDll_1.dll");
	//first method(getproc address method)
	/*int(*fun);
	fun = (int(*))GetProcAddress(hwnd, "Addition");
	fun = (int(*))GetProcAddress(hwnd, "Subtraction");
	fun = (int(*))GetProcAddress(hwnd, "Multiply");
	fun = (int(*))GetProcAddress(hwnd, "display1");*/
	//second method
	fun1 obj;
	obj = (fun1)GetProcAddress(hwnd, "display1");
	obj = (fun1)GetProcAddress(hwnd, "Addition");
	obj = (fun1)GetProcAddress(hwnd, "Subtraction");
	obj = (fun1)GetProcAddress(hwnd, "Multiply");
	display1();
	Addition();
	Subtraction();
	Multiply();
	system("pause");
	FreeLibrary(hwnd);
    return 0;
}

