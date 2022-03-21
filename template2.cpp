#include<iostream>
#include<string.h>
using namespace std;

template <typename T, typename U>
void swap1(int *a, int *b)
{
	U *temp;
	*temp = *a;
	*a = *b;
	*b = *temp;
}

int main()
{
	int x, y;
	cin>>x>>y;
	cout<<"before swapping"<<endl;
	cout<<"the value of x:"<<x<<endl;
	cout<<"the value of y:"<<y<<endl;
	swap1(&x, &y);
	cout<<"after swapping"<<endl;
	cout<<"the value of x:"<<x<<endl;
	cout<<"the value of y:"<<y<<endl;
	return 0;
}
