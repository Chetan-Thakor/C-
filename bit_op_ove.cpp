#include<iostream>
using namespace std;
class integer
{
	int p,q;
	public:
	
	integer()
	{
		p = 0;
		q = 0;	
	}
	
	integer(int x,int y)
	{
		p = x;
		q = y;
	}
	
	integer operator &(integer c)				//bitwise and operator
	{
		integer temp;
		temp.p = p & c.p;
		temp.q = q & c.q;
		return temp;
	}
	
	integer operator |(integer c)				//bitwise or operator
	{
		integer temp;
		temp.p = p | c.p;
		temp.q = q | c.q;
		return temp;
	}

	integer operator ^(integer c)				//bitwise xor operator
	{
		integer temp;
		temp.p = p ^ c.p;
		temp.q = q ^ c.q;
		return temp;
	}
	void disp()
	{
		cout<<"the value of p is:"<<p<<endl;
		cout<<"the value of q is:"<<q<<endl;
	}
};

int main()
{
	integer a1(7,10),a2(10,7),a3;
	a3 = a1 & a2;
	a3.disp();

	a3 = a1 | a2;
	a3.disp();

	a3 = a1 ^ a2;
	a3.disp();
	return 0;
}
