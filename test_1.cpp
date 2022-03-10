#include<iostream>
using namespace std;

class simple
{
	int a, b;
	public:

	void input(int a, int b)
	{
		this->a = a + b;
		this->b = a - b;
	}

	void disp()
	{
		cout<<"a = "<<a<<endl;
		cout<<"b = "<<b<<endl;
	}
};
int main()
{
	simple s1;	
	int a = 5, b = 7;
	s1.input(a, b);
	s1.disp();
	return 0;
}
