#include<iostream>
using namespace std;

class Base
{
	int a, b;
	public:	
	~Base()
	{
		cout<<"hi, i'm Destructor"<<endl;
	}	
	void disp()
	{
		cout<<a<<endl<<b<<endl;
	}
};

class derived: public Base
{
	public:

	~derived()
	{
		cout<<"hi, destructor derived"<<endl;
	}
};

int main()
{	
	//Base b1;
	derived d1;
	
	return 0;
}

