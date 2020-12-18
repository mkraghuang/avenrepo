#include<iostream>
using namespace std;
template<class T>
class Arithmetic
{
private:
	T a;
	T b;
	T c;
public:
	Arithmetic(T x, T y,T z);
	T maximum_3();
};
template<class T>
Arithmetic<T>::Arithmetic(T a, T b, T c)
{
	this->a = a;
	this->b = b;
	this->c = c;
}
template<class T>
T Arithmetic<T>::maximum_3()
{
	return (a >b&&a>c)? a : (b>c)? b : c;
}
int main()
{
	Arithmetic<int> obj(10, 20,5);
	cout<<"greater number between three integer numbers is:"<<obj.maximum_3()<<endl;	
	Arithmetic <float> obj1(2.5, 1.9,5.6);
	cout << "   " << endl;
	cout <<"greater number between three float numbers is:" <<obj1.maximum_3()<< endl;
	cout << "   " << endl;
	Arithmetic<double> obj2(10000,50000,20000);
	cout << "greater number between double numbers is:" << obj2.maximum_3() << endl;
	cout << "   " << endl;
	Arithmetic<char> obj3('A', 'Y','g');
	cout << "greater variable between three characters:" << obj3.maximum_3() << endl;
	cout << "   " << endl;
	system("pause");
	return 0;

}