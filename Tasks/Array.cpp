#include<iostream>

using namespace std;

void main()
{
	int arr[4], start = 0,i, end = 3;

	cout << "Enter Array values:" << endl;
	for ( i= 0; i <4; i++)
	{
		cin>>arr[i];
	}
	cout << "Array Numbers are:"<<endl;
	for ( i = 0; i < 4; i++)
	{
		cout << arr[i];
	}
	while(start<end)
	{
		int temp = arr[start];
		arr[start] = arr[end];
		arr[end] = temp;

		start++;
		end--;
		
	}
	cout << " Reverse of Array Values are:" << endl;
	{
		for (i = 0; i < 4; i++)
			cout << arr[i];
	}
	system("pause");

}