#include<iostream>
#include<exception>
using namespace std;

int main()
{
	try
	{
		int *my_array = new int[0];
	}

	catch(exception & a1)
	{
		cout<<"Exception "<<a1.what() <<endl;
	}

	return 0;
}
