#pragma once
#include<iostream>
using namespace std;
#ifdef PROJECT5_EXPORT
#define UTLISDLL _declspec(dllexport)
#else
#define UTLISDLL _declspec(dllimport)

#endif // 


//_declspec(dllexport)int Add(int x, int y);
//_declspec(dllexport)int Sub(int a, int b);
//_declspec(dllexport)int Multi(int p, int q);
extern "C"
{
	UTLISDLL int Add(int x, int y);
	UTLISDLL int Sub(int a, int b);
	UTLISDLL int Multi(int p, int q); 
}
