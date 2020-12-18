#pragma once

#include <iostream>
using namespace std;


#ifdef  DLLME
#define UTILDLL _declspec(dllexport)
#else
#define UTILDLL _declspec(dllimport)
#endif //  APPDLL


namespace operations
{
	namespace simpleops
	{
		int add;
		int sub;
		void disp() { cout << "Hello"; }
	}
	void disp() { cout << "Hai from outer namespace"; }
}


/*
_declspec(dllexport) - exporting fn from dll 
_declspec(dllimport) - importing fn to app from dll

name mangling - iadditionutilii
*/
extern "C"
{
	UTILDLL int  additionutil(int a, int b);
	UTILDLL int  subtractionutil(int a, int b); 
};
	