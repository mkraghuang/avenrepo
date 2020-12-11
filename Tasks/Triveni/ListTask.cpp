#include <iostream>
#include<list>

using namespace std;
int main()
{
	list <int>mylist= { 10,20,30,20,20,45,50,50,60,10,10,10 };
	list<int>::iterator it;
	cout << "Before Removing Duplicates in List:" << endl;
	for (auto it = mylist.begin(); it != mylist.end(); ++it)
		cout<<*it << endl;
	
		
	mylist.sort();
	mylist.unique();
	cout << "After Removing Duplicates in list:" << endl;
	
	for (auto it = mylist.begin(); it != mylist.end();++it)
		cout <<*it << endl;
	return 0;

}

