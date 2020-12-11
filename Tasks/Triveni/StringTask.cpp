#include<iostream>
#include<map>
#include<utility>
#include<string>

using namespace std;
int main()
{
	string str="Helloworld";
	map<char, int>mymap;
	map<char, int>::iterator it;
	for (auto i = 0; i < str.length(); i++)
		mymap[str[i]]++;
	for (it = mymap.begin();it!= mymap.end(); ++it)
		cout << it->first <<"->"<< it->second << endl;

		
	
	return 0;
}


