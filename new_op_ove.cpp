#include<iostream>
#include<stdlib.h>
using namespace std;
class op
{
	int a,b,c;
	public:
	
	op()
	{
		a = 0;
		b = 0;
		c = 0;
	}
	
	~op()
	{
		cout<<"destructor called"<<endl;
	}
	/*op(int x,int y,int z)
	{
		a = x;
		b = y;	
		c = z;		
	}*/

	void * operator new(size_t b)
	{
		void *ptr;
		ptr = malloc(b);
		cout<<"hello"<<endl;
		return ptr;
	}
	
	void operator delete(void *pt)
	{
		free(pt);
	}
	
	void disp()
	{
		cout<<"the value of a:"<<a<<endl;	
		cout<<"the value of b:"<<b<<endl;
		cout<<"the value of c:"<<c<<endl;
	}
};

int main()
{	
	op *p1 = new op;
	p1->disp();
	delete p1;
	return 0;
}
