#include<iostream>
#include <fstream>
#include<string>
using namespace std;

int main()
{
	int n = 10;
	cout << "Numbres" << endl;
	ofstream myfile("numbres.txt");
	for (int i = 1; i <= 10; i++)
	{
		myfile << i << endl;
	}
	myfile.close();
	cout << "file wtite completed" << endl;
	system("pause");
	return 0;
	//int n=10;
	////creating new file
	//ofstream new_file1;
	//new_file1.open("NewFile.txt", ios::out);//opening file
	////writing in file
	//new_file1 << "Numbers:" << endl;
	//for (int i = 1; i <= 10; i++)
	//{
	//	new_file1 << i << endl;
	//}
	//new_file1.close();//closing file1
	////reading from file
	//ifstream new_file2("NewFile.txt");
	//int datum;
	//while (new_file1 >> datum) 
	//{
	//	new_file2 << datum * 10 << endl;
	//}
	//new_file2.close();//closing file1
	//cout << "Done!" << endl;
}