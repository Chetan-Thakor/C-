#include<iostream>
using namespace std;

class Test
{
	int x;
	
	public:

	void read()
	{
		cout<<"enter a number"<<endl;
		cin>>x;
	}

	class Even
	{
	
	};
	
	class Odd
	{

	};

	void check()
	{
		if(x % 2 == 0)
		{
			throw Even();
		}

		else
		{
			throw Odd();
		}
	}
};
int main()
{
	Test t1;
	t1.read();
	try
	{
		t1.check();
	}

	catch(Test :: Even)
	{
		cout<<"Even"<<endl;
	}
		
	catch(Test :: Odd)
	{
		cout<<"Odd"<<endl;
	}	

	return 0;
}
