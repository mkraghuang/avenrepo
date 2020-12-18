#pragma once
#include<iostream>

//_declspec(dllexport)void display1();

#ifdef EXDLL_1_EXPORT
#define UTILS _declspec(dllexport)
#else
#define UTILS _declspec(dllimport)
#endif // EXDLL_1_EXPORT

extern "C"
{
	UTILS void display1();
	UTILS void Addition(void);
	UTILS void Subtraction(void);
	UTILS void Multiply(void);
}
