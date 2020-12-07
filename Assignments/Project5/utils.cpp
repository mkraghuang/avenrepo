#include "utils.h"



int additionutil(int a, int b)
{
	cout << "from dynamic library";
	return a + b;
}

int subtractionutil(int a, int b)
{
	cout << "from dynamic library";
	return a - b;
}