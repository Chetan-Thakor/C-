#include<iostream>
using namespace std;

void fun() throw(int , double, char)
{
	int a = 2;
	if (a == 3)
	{
		throw a;
	}

	else if(a == 2)
	{
		throw 'A';
	}

	else if(a == 3)
	{
		throw 4.5;
	}


}

int main()
{
	try
	{
		fun();
	}

	catch(int n)
	{
		cout<<"n is:"<<n<<endl;
	}

	catch(double n)
	{
		cout<<"n is:"<<n<<endl;
	}

	catch(char n)
	{
		cout<<"n is:"<<n<<endl;
	}

	return 0;
}
