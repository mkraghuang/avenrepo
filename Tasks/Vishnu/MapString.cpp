#include<iostream>
#include<map>
#include<string>
using namespace std;

int main()
{
	string str="Helloworld";

	map<char, int>m;
	map<char, int>::iterator itr;

	for (int i = 0;i<str.length(); i++)
		m[str[i]]++;

	for (itr = m.begin(); itr != m.end(); itr++)
	{
		cout << itr->first << "--" << itr->second << endl;
	}
}