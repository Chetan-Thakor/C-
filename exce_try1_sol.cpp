#include<iostream>
using namespace std;

int main()
{
	int n1, n2;
	cout<<"enter the value of first number"<<endl;
	cin>>n1;
	cout<<"enter the value of second number"<<endl;
	cin>>n2;
	try
	{
		if(n2 == 0)
		{
			throw n2;
		}
		
		else
		{
			cout<<"result is:"<<n1 / n2;
		}
	}

	catch(int n)
	{
		cout<<"can't divide by zero"<<endl;
	}
	return 0;
}
