#include<iostream>
using namespace std;


template <typename T, typename U>
T sum(T n1, U n2)
{
	T rs;
	rs = n1 + n2;
	return rs;

}
int main()
{
	int a = 10, b = 20, c;
	double A = 11.5, B = 21, C;
	c = sum(a, b);
	cout<<"the sum of two integer:"<<c<<endl;
	C = sum(A, B);
	cout<<"the sum of two long:"<<C<<endl;  
	return 0;
}
