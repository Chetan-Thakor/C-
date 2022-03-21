#include<iostream>
using namespace std;

template<typename T>
void fun(const T)
{
	static int i=10;
	cout<< ++i <<endl;
	return ;
}

int main()
{
	fun(1);
	fun(2);
	fun(10.1);
	return 0;
}
