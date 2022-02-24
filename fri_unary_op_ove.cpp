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
	
	friend input operator -(input a1);
	friend input operator --(input a1);
	friend input operator --(input a1,int);
	friend input operator ++(input a1);
	friend input operator ++(input a1,int);
	
	void disp()
	{
		cout<<"the value of x is:"<<x<<endl;
		cout<<"the value of y is:"<<y<<endl;
		cout<<"the value of z is:"<<z<<endl;
		cout<<endl;
	}

};

input operator -(input a1)
{
	input temp;
	temp.x = -a1.x;
	temp.y = -a1.y;
	temp.z = -a1.z;
	return temp;
}

input operator --(input a1)
{
	input temp;
	temp.x = --a1.x;
	temp.y = --a1.y;
	temp.z = --a1.z;
	return temp;
}

input operator --(input a1,int)
{	
	input temp;
	temp.x = a1.x--;
	temp.y = a1.y--;
	temp.z = a1.z--;
	return temp;
}

input operator ++(input a1)
{
	input temp;
	temp.x = ++a1.x;
	temp.y = ++a1.y;
	temp.z = ++a1.z;
	return temp;
}

input operator ++(input a1,int)
{
	input temp;
	temp.x = a1.x++;
	temp.y = a1.y++;
	temp.z = a1.z++;
	return temp;
}

int main()
{
	input c1(1,2,3),c2;
	c1.disp();
	c2 = -c1;
	c2.disp();

	c2 = --c1;
	c2.disp();

	c2 = c1--;
	c2.disp();

	c2 = ++c1;
	c2.disp();

	c2 = c1++;
	c2.disp();
	return 0;
}
