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
	
	bool operator &&(integer c)					//logical and operator 
	{
		if((p && c.p) && (q && c.q))
		{
			return true;		
		}
		else
		{
			return false;			
		}
	}
	
	bool operator ||(integer c)					//logical or operator
	{
		if((p || c.p) || (q || c.q))
		{
			return true;
		}
		else
		{
			return false;
		}
	
	}
	void disp()
	{
		cout<<"the value of p part is:"<<p<<endl;
		cout<<"the value of q part is:"<<q<<endl;
	}
};

int main()
{
	integer a1(2,3),a2(5,6);
	a1.disp();
	a2.disp();
	if(a1 && a2)					//for logical and operator 
	{
		cout<<"both have non zero value\n";
	}
	else
	{
		cout<<"either one or both have zero value\n";	
	}

	if(a1 || a2)					//for logical or operator
	{
		cout<<"one or both have non zero value\n";
	}
	else
	{
		cout<<"both have zero value\n";
	}
	return 0;
}
