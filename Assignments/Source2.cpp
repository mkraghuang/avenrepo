#include<iostream>
using namespace std;
int main()
{
	int *p;
	int *q;
	p =new int[5];

	p[0] = 1;
	p[1] = 5;
	p[2] = 8;
	p[3] = 9;
	p[4] = 2;
	q = new int[10];
	for (int i =0; i<5; i++)
	{
		q[i] = p[i];
		delete[]p;

		p = q;
		q = NULL;
	}
	for (int i = 0; i<5; i++)
	{

		printf("%d", p[i]);
		
		
	}

	
	return 0;
}