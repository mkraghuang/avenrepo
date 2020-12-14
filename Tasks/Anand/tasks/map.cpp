#include<iostream>
#include<map>
#include<iterator>
using namespace std;
char a[100];
int main()
{
	std::map<char, int> mymap;
	int n;
	cout << "enter size:";
	cin >> n;
	for (int i = 0; i<n; i++)
	{
		cin >> a[i];
	}
	for (int i = 0; i<n; i++)
	{
		mymap[a[i]]++;
	}
	map<char, int> ::iterator it;
	for (it = mymap.begin(); it != mymap.end(); it++)
	{
		cout << it->first << "  " << it->second << endl;
	}

	system("pause");
	return 0;
}