#include<iostream>
using namespace std;

template<class x>
void swap1(x &a, x &b)
{
	x temp;
	temp = a;
	a = b;
	b = temp;
	cout<<"inside template swap"<<endl;
}

void swap1(int &a, int &b)
{
	int temp;
	temp = a;
	a = b;
	b = temp;
	cout<<"inside generic specialization"<<endl;
}

int main()
{
	int i = 10, j = 20;
	double p = 5.5, q = 10.5;
	swap1(i, j);
	swap1(p, q);
	
	cout<<"the value of i and j are respectively"<<i<<"\t"<<j<<endl;
	cout<<"the value of p and q are respectively"<<p<<"\t"<<q<<endl;

	return 0;

}
