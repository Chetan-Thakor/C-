#include<iostream>
using namespace std;

int main()
{
	int a = 3;
	try
	{
		if(a == 1)
		{
			throw a;		//throwing integer exception
		}
		
		else if(a == 2)
		{
			throw 'A';		//throwing char exception
		}	
		
		else if(a == 3)
		{
			throw 4.5;		//throwing float exception
		}
	}

	catch(int a)
	{
		cout<<"integer got"<<endl;
	}

	catch(char b)
	{
		cout<<"char got"<<endl;
	}

	catch(double c)
	{
		cout<<"float got"<<endl;
	}

	return 0;
}
