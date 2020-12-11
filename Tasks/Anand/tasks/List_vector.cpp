#include<iostream>
#include<vector>
#include<list>
#include<algorithm>
using namespace std;
//list and vector
int main()
{
	list<int>V1 = { 10,20,10,20,10,50,40,80,10,20,30};
	list<int>::iterator itr;
	cout << "Size of the vector is:" << V1.size() << endl;
	for (auto itr = V1.begin(); itr != V1.end(); ++itr)
		cout << *itr << endl;
	stable_sort(V1.begin(), V1.end());
	itr = unique(V1.begin(), V1.end());
	V1.erase(itr, end(V1));
	cout << "Vector size:" << V1.size() << endl;
	cout << " After Removing Duplicates in Vector:" << endl;
	for (auto itr = V1.begin(); itr != V1.end(); ++itr)
		cout << *itr << endl;
	/*vector<int>V1 = { 2,3,3,2,2,4,5,5,6,1,1,1};
	vector<int>::iterator itr;
	cout << "Size of the vector is:" << V1.size() << endl;
	for (auto itr = V1.begin(); itr != V1.end(); ++itr)
		cout << *itr << endl;
	stable_sort(V1.begin(), V1.end());
	itr =unique(V1.begin(), V1.end());
	V1.erase(itr, end(V1));
	cout << "Vector size:" << V1.size() << endl;
	cout << " After Removing Duplicates in Vector:" << endl;
	for (auto itr = V1.begin(); itr != V1.end(); ++itr)
		cout << *itr << endl;*/
	system("pause");
	return 0;
}