#include<iostream>
using namespace std;
int main()
{
	int *p1, *p2, sum;
	p1 = new int;
	p2 = new int;
	cout<<"Enter the first number"<<endl;
	cin >> *p1;
	cout<<"Enter the second number"<<endl;
	cin >> *p2;
	sum = *p1 + *p2;
	cout << "the sum is:"<<sum<<endl;
	delete p1;
	delete p2;
	return 0;
}
