#include<iostream>
#include<fstream>

using namespace std;

int main()
{
	ofstream File;
	File.open("sample.txt",ios::out | ios::app);
	//File << "This is first one"<< "\n" <<"this is second line" << endl;
	File.close();
	ifstream File1;
	File1.open("sample.txt",ios::in);
	int n=10;
	int i = 1;
	for (int i = 1; i <= 10; i++)
	{
		cout <<i << endl;
		cout << n << "*" << i << "=" << n*i << endl;
	}
	
File1.close();
	
}