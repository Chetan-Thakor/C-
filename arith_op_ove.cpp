#include<iostream>
using namespace std;

class complex
{
	int real,img;

	public:
	
	complex()
	{
		real = 0;
		img = 0;
	}	
	
	complex(int x,int y)
	{
		real = x;
		img = y;
	}
	
	complex operator +(complex c)			//add operator 
	{
		complex temp;
		temp.real = real + c.real;
		temp.img = img + c.img;
		return temp;
	}
	
	complex operator -(complex c)			//subtaction operator
	{
		complex temp;
		temp.real = real - c.real;
		temp.img = img - c.img;
		return temp;
	}

	complex operator *(complex c)			//multiplication operator
	{
		complex temp;
		temp.real = real * c.real;
		temp.img = img * c.img;
		return temp; 
	}

	complex operator /(complex c)			//division operator
	{
		complex temp;
		temp.real = real / c.real;
		temp.img = img / c.img;
		return temp;
	}

	complex operator %(complex c)			//modulo operator
	{
		complex temp;
		temp.real = real % c.real;
		temp.img = img % c.img;
		return temp;
	}

	complex operator =(complex c)			//assignment operator
	{
		complex temp;
		temp.real = real = c.real;
		temp.img = img = c.img;
		return temp;
	}
	void disp()
	{
		cout<<"the value of real part is:"<<real<<endl;
		cout<<"the value of img part is:"<<img<<endl;	
	}
};

int main()
{
	complex a1(2,3),a2(5,6),a3;
	a3 = a1 + a2;
	a3.disp();
	a3 = a1 - a2;
	a3.disp();
	a3 = a1 * a2;
	a3.disp();
	a3 = a1 / a2;
	a3.disp();
	a3 = a1 % a2;
	a3.disp();
	a3 = a1 = a2;
	a3.disp();
	a1.disp();
	return 0;
}
