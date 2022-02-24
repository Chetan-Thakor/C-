#include<iostream>
using namespace std;

class input
{
	int x,y,z;
	
	public:
	input()
	{
		x = 0;
		y = 0;
		z = 0;
	}
	
	input(int a,int b,int c)
	{
		x = a;
		y = b;
		z = c;
	}
	
	void operator -();
	void operator --();
	void operator --(int);
	void operator ++();
	void operator ++(int);
	
	void disp()
	{
		cout<<"the value of x is:"<<x<<endl;
		cout<<"the value of y is:"<<y<<endl;
		cout<<"the value of z is:"<<z<<endl;
		cout<<endl;
	}

};

void input :: operator -()
{
	x = -x;
	y = -y;
	z = -z;
}

void input :: operator --()
{
	x = --x;
	y = --y;
	z = --z;
}

void input :: operator --(int)
{
	x = x--;
	y = y--;
	z = z--;
}

void input :: operator ++()
{
	x = ++x;
	y = ++y;
	z = ++z;
}

void input :: operator ++(int)
{
	x = x++;
	y = y++;
	z = z++;
}

int main()
{
	input c1(1,2,3);
	c1.disp();
	-c1;
	c1.disp();

	--c1;
	c1.disp();

	c1--;
	c1.disp();

	++c1;
	c1.disp();

	c1++;
	c1.disp();
	return 0;
}
