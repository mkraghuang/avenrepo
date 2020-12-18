#include<iostream>
#include<string>
using namespace std;

int main()
{
	char str1[20] = "Mathmatics";
	char str2[20] = "Physics";
	int mLength;
	int mReturn;
	//strcpy copies the strings one to another
	strcpy(str1, str2);
	cout << "Contents of str1:" << str1 << endl;
	strcpy(str1, "Chemistry");
	cout << "Final Contents of str1:" << str1 << endl;
	//strlen display the length of string
	mLength = strlen(str1);
	cout << "Length of str1:" << mLength << endl;
	//strcmp compares two strings
	mReturn = strcmp(str1, str2);
	if (mReturn == 1)
	{
		cout << "The Strings Match" << endl;
	}
	else
	{
		cout << "The Strings do not Match" << endl;
	}
	system("pause");
	return 0;
}