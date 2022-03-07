#include<iostream>
using namespace std;

class animal
{
	public:
	
	int legs, weight;
	
	void insert(int a, int b)
	{
		legs = a;
		weight = b;
	}

	void disp()
	{
		cout<<"the legs are:"<<legs<<end;
		cout<<"the weight is:"<<weight<<endl;
	}

};
	
class lion: public animal
{
	public:
	int bark;
	void disp1()
	{
		cout<<"it's not pet"<<endl;
	}
	
};

class cow: public animal
{
	public:
	int a, b;
	void disp1()
	{
		cout<<"it's pet"<<endl;
	}
	
};

class both: public lion, public cow
{
	public:
	char c;
	void disp2()
	{
		cout<<"both"<<endl;
	}	
	
};

int main()
{	
	animal a1;
	

	return 0;
}
