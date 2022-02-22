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
	
	friend complex operator +(complex c1,complex c2);
	friend complex operator -(complex c1,complex c2);
	friend complex operator *(complex c1,complex c2);
	friend complex operator /(complex c1,complex c2);
	friend complex operator %(complex c1,complex c2);
	
	void disp()
	{
		cout<<"the value of real part is:"<<real<<endl;
		cout<<"the value of img part is:"<<img<<endl;
	}
};

complex operator +(complex c1,complex c2)			//for add operator
{
	complex temp;
	temp.real = c1.real + c2.real;
	temp.img = c1.img + c2.img;
	return temp;	
}

complex operator -(complex c1,complex c2)			//for subtraction operator
{
	complex temp;
	temp.real = c1.real - c2.real;
	temp.img = c1.img - c2.img;
	return temp;	
}

complex operator *(complex c1,complex c2)			//for multiplication operator
{
	complex temp;
	temp.real = c1.real * c2.real;
	temp.img = c1.img * c2.img;
	return temp;	
}

complex operator /(complex c1,complex c2)			//for division operator
{
	complex temp;
	temp.real = c1.real / c2.real;
	temp.img = c1.img / c2.img;
	return temp;	
}

complex operator %(complex c1,complex c2)			//for modulo operator
{
	complex temp;
	temp.real = c1.real % c2.real;
	temp.img = c1.img % c2.img;
	return temp;	
}


int main()
{
	complex a1(2,2),a2(4,4),a3;
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
	return 0;
}
