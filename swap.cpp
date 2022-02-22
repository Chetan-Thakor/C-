#include<iostream>
using namespace std;

void swap(int a,int b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
}

void swap1(int *a,int *b)
{
	int temp;
	temp = *a;
	*a = *b;
	*b = temp;
}
int main()
{
	int x, y;
	cout<<("the value of x is:%d\n",x);
	cin>>x;
	cout<<("the value of y is:%d\n",y);
	cin>>y;
	cout<<("the value of x and y before swapping\n");
	cout<<x<<y<<endl;
	swap(x,y);
	cout<<("the value of x and y after swapping\n");
	cout<<x<<y<<endl;
	cout<<("swap using call by reference\n");
	cout<<("the value of x and y before swapping\n");
	cout<<x<<y<<endl;
	swap1(&x,&y);
	cout<<("the value of x and y after swapping\n");
	cout<<x<<y<<endl;
	return 0;
}

