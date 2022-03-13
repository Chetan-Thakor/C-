#include<iostream>
using namespace std;

int main()
{
	int a = 3;
	try
	{
		try
		{	
			throw a;
		}
	
		catch(int x)
		{
			cout<<"exception in inner catch block"<<endl;
			throw x;
		}
	}
	
	catch(int c)
	{
		cout<<"exception in outer catch block"<<endl;
	}

	return 0;
}
