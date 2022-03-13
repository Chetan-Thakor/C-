#include<iostream>
using namespace std;

class base
{
	public:
	
	int b;
	void show()
	{
		cout<<"b="<<b<<endl;
	}
};

class derived:public base
{
	public:
	int b;
	void show()
	{
		cout<<"b is:"<<b<<endl;
	}
};

int main()
{
	base b1;
	derived d1;
	base *bptr;
	bptr = &b1;
	bptr->b  = 100;
	bptr->show();
	bptr = &d1;
	bptr->b = 200;
	bptr->show();
	return 0;
}
