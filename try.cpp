#include<iostream>
using namespace std;

class animal
{
	public:
	
	int legs, weight;
	
	/*void insert(int a, int b)
	{
		legs = a;
		weight = b;
	}

	void disp()
	{
		cout<<"the legs are:"<<legs<<endl;
		cout<<"the weight is:"<<weight<<endl;
	}*/

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

	void insert(int a, int b)
	{
		legs = a;
		weight = b;
	}

	void disp()
	{
		cout<<"the legs are:"<<legs<<endl;
		cout<<"the weight is:"<<weight<<endl;
	}
	void disp2()
	{
		cout<<"it's pet"<<endl;
	}
	
};

/*class both: public lion, public cow
{
	public:
	char c;
	void disp2()
	{
		cout<<"both"<<endl;
	}	
	
};*/

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
	both b1;
	b1.insert(4,40);
	b1.disp();
	b1.disp1();
	return 0;
}
