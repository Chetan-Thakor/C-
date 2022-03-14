#include<iostream>
using namespace std;


	void simple(int x)
	{
		{		
			cout<<"the value of x is:"<<x<<endl;

		}
	
		if(x > 10)
		{
			cout<<"value of X is:"<<x<<endl;
			throw x;
		}
	}


int main()
{
	try
	{
		simple(10);
	}

	catch(int x)
	{
		cout<<x<<endl;
	}

	return 0;
}
	
	
	
