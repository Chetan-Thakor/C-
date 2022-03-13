#include<iostream>
using namespace std;

class base
{
	int a, b;
	public:

	void set(int i, int j)
	{
		a = i;
		b = j;
	}
	
	void disp()
	{
		cout<<a<<endl<<b<<endl;
	}
};

class derived
{
	int c;
		
	public:
	
	void set1(int k)
	{
		c = k;
	}
	
	void disp1()
	{
		cout<<c<<endl;
	}



};
int main()
{
	
	base *ptr;
	base b1;	
	ptr = &b1;
	ptr->set(3,2);
	ptr->disp();
	derived d1;	
	/*ptr = &d1;
	ptr->set1(3,2);
	ptr->disp1();*/
	return 0;
} 
