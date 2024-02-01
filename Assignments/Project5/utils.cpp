#include "utils.h"



int additionutil(int a, int b)
{
	cout << "from dynamic library dll";
	return a + b;
}

int subtractionutil(int a, int b)
{
	cout << "from dynamic library dll";
	return a - b;
}