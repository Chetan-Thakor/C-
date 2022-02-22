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
	
	bool operator ==(integer c)				//equality operator 
	{
		if(p == c.p)
		{
			return true;
		}
		else
		{
			return false;		
		}
	}

	bool operator >(integer c)				//greater than operator
	{
		if((p > c.p) && (q > c.q))
		return true;
		else
		return false;		
	}

	bool operator <(integer c)				//less than operator
	{
		if((p < c.p) && (q < c.q))
		return true;
		else
		return false;	
	}

	bool operator >=(integer c)				//greater than or equal operator
	{
		if((p >= c.p) && (q >= c.q))
		return true;
		else
		return false;		
	}

	bool operator <=(integer c)				//less than or equal operator
	{
		if((p <= c.p) && (q <= c.q))
		return true;
		else
		return false;	
	}

	void disp()
	{
		cout<<"the value of p is:"<<p<<endl;
		cout<<"the value of q is:"<<q<<endl;
	}
};

int main()
{
	integer a1,a2(1,1);
	if(a1 == a2)
	{
		cout<<"both integer are same"<<endl;
	}
	else
	{
		cout<<"both integer are different"<<endl;
	}
	
	if(a1 > a2)
	cout<<"a1 is greater than the a2"<<endl;
	else
	cout<<"a2 is greater than the a1"<<endl;

	if(a1 < a2)
	cout<<"a1 is less than the a2"<<endl;
	else
	cout<<"a2 is less than the a1"<<endl;

	if(a1 >= a2)
	cout<<"a1 is greater than the a2"<<endl;
	else
	cout<<"a2 is greater than the a1"<<endl;

	if(a1 <= a2)
	cout<<"a1 is less than the a2"<<endl;
	else
	cout<<"a2 is less than the a1"<<endl;
	return 0;
}
