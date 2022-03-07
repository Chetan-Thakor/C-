#include<iostream>
using namespace std;

class liquid
{
	public:
		
	void disp()
	{
		cout<<"liquid"<<endl;
	}

};

class fuel
{
	public:
		
	void disp1()
	{
		cout<<"fuel"<<endl;
	}	
};

class petrol: public liquid, public fuel
{
	public:
	
	int a, b;
	void disp2()
	{
		cout<<"petrol"<<endl;
	}

};

int main()
{
	petrol p1;
	p1.disp();
	p1.disp1();
	return 0;
}


