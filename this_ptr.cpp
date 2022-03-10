#include<iostream>
using namespace std;

class A
{
	int c, d;

	public:
		
	void set(int c, int d)
	{
		this->c = c;
		this->d = d;
	}

	void disp()
	{
		cout<<"c:"<<c<<endl;
		cout<<"d:"<<d<<endl;
	}
};
int main()
{
	A a1;
	a1.set(4,5);	
	a1.disp();
	return 0;
}
