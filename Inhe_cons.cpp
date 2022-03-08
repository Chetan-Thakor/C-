#include<iostream>
using namespace std;

class Base
{
	int a, b;
	public:

	Base()
	{
		cout<<"hello"<<endl;
	}
	
	Base(int i, int j)
	{
		a = i;
		b = j;
	}
	
	void disp()
	{
		cout<<a<<endl<<b<<endl;
	}
};

class derived: public Base
{
	public:

	derived()
	{
		cout<<"Evening"<<endl;
	}
	
};

int main()
{	
	//Base b1, b2(4,5);
	derived d1;
	
	return 0;
}

