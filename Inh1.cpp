#include<iostream>
#include<string.h>
using namespace std;
class person
{
	//int height, weight;
	//char name[10];
	
	public:
		int height, weight;
	char name[10];
	
	void insert(int a, int b, char c[10])
	{
		height = a;
		weight = b;
		name[10] = c[10]; 
	}

	void disp()
	{
		cout<<"The height of person is:"<<height<<endl;
		cout<<"The weight of person is:"<<weight<<endl;
		cout<<"The name of person is:"<<name<<endl;	
	}
};

class doctor: public person
{
	public:
	
	int a, b;

};

class footballer: public person
{
	public:
	
	char b;

};

int main()
{
	doctor d1;
	d1.insert(4,5,"sanjay");
	d1.disp();
	return 0;
}
