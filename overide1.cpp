#include<iostream>
using namespace std;

class ABC
{
	int a, b;
	public:

	void set(int a, int b)
	{
		a = a;
		b = b;
	}
	
	void disp(int , int)
	{
		cout<<a<<endl<<b<<endl;
		
	}
};

class xyz: public ABC
{
	char x;
	
	public:
	
	void disp(int , char)
	{
		cout<<"hello everyone"<<endl;
	}
	
};

int main()
{
	
	xyz x1;
	x1.disp(1,2);
	x1.ABC :: disp(1 , 'a');
	return 0;
}
