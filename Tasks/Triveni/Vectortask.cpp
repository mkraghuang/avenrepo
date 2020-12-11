#include<iostream>
#include<vector>
#include<algorithm>

using namespace std;

int main()
{
	vector<int>V1 = { 10,20,30,20,20,45,50,50,60,10,10,10 };
	vector<int>::iterator itr;
	cout <<"Size of the vector is:"<< V1.size()<<endl;
	for (auto itr = V1.begin(); itr != V1.end(); ++itr)
		cout << *itr << endl;

	//removing Duplicates in Vector

	stable_sort(V1.begin(), V1.end());
	itr =std:: unique(V1.begin(), V1.end());
	V1.erase(itr,end(V1));

	//V1.resize(distance(V1.begin(),itr));



	cout<<"Vector size:"<< V1.size() << endl;
	cout << " After Removing Duplicates in Vector:" << endl;

	for (auto itr = V1.begin(); itr != V1.end(); ++itr)
	cout << *itr << endl;
}

