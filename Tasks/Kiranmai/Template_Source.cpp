#include<iostream>
using namespace std;

template<class T>
class Mix
{
	T m_n1, m_n2;
public:
	Mix(T n1, T n2) :m_n1(n1), m_n2(n2)
	{}
	T FindOutMax();
};
template<class T>T Mix<T>::FindOutMax()
{
	T result;
	if (m_n1 > m_n2)
	{
		result = m_n1;
		return result;
	}
	else
		result = m_n2;
	return result;
}

int main()
{
	Mix<int>obj(40, 88);
	Mix<float>obj2(3.42f, 9.82f);
	cout << obj.FindOutMax() << endl;
	cout << obj2.FindOutMax() << endl;;
	system("pause");
	return 0;
}