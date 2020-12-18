#include<iostream>
using namespace std;
//write a program that takes three parameters(two values(a, b) and one reference(&c)) = > perform c = a + b, print result in main
//write a program to swap two values.a = 3, b = 4 (a = 4, b = 3)
//write a program to reverse array.int a[5] = { 1,2,3,4,5 };
//write a program to check array is palindrom. int a[5] = {1,2,3,2,1};

void add(int a,int b)
{
	int &c = a;
	cout << a << endl;;
	cout << c<<endl;
	  c= a + b;
	cout << c << endl;

}
void swap(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}
int main()
{
	int e= 10,f= 2;
	add(e,f);
	int x = 10, y = 5;
	cout << "the value of x before swapping is:" << x << endl;
	cout << "the value of y before swapping is:" << y << endl;
	cout << "from main" << endl;
	swap(x, y);
	cout << "the value of x after swapping is:" << x << endl;
	cout << "the values of y after swapping is:" << y << endl;
	int n;
	cout << "enter number:" << endl;
	cin >> n;
	int r, sum = 0;
	int temp = n;
	while(n>0)
	{
		r = n % 10;
		sum =sum * 10 +r;
		n = n/10;
	}
	
	if (sum ==temp)
		cout << "number is a palindrome" << endl;
	else
		cout << "number is not a palindrome" << endl;

	int i, j;
	int length = 5;
	int a[5] = {2,4,6,8,10};
	for (i =0;i<5;i++)
	{
		cout << a[i] << endl;
		cout << "\n" << endl;
	}
	int b[5];
	for (i=length-1,j=0;i>=0;i--,j++)
		 b[j]=a[i];
	for (j = 0;j<5; j++)
	{
		cout << b[j] << endl;
		cout << "\n" << endl;
		
	}
	
	system("pause");
	return 0;
}