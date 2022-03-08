#include<iostream>
#include<string.h>
using namespace std;

class student
{
	int roll_no;
	char name[10];
	
	public:

	void insert_s(int a, char arr[10])
	{
		roll_no = a;
		strcpy(name,arr);
	}
	
};

class test
{
	public:
	int marks[5];
	int *p1 = marks;
	void insert_t()
	{	
		for(int i=0; i<5; i++)
		{
			cin>>*p1;
			p1++;
		}
	}
	
	void disp()
	{
		for(int i=0; i<5; i++)
		{
			cout<<marks[i];
		}	
	}
};

class result: public student, public test
{
	public:
	int total=0, percentage;
	//cout<<"Total marks of student"<<endl;
	void totalmarks()
	{
		for(int i=0; i<5; i++)
		{
			 total = total + marks[i];
		}
		cout<<"Total marks of student is:"<<total<<endl;
	}

	void percentage1()
	{
		percentage = total * 100 / 500;
		cout<<"Percentage of student is:"<<percentage<<endl;

	}
};

int main()
{
	student s1;
	test t1;
	result r1;
	s1.insert_s(1,"ramesh");
	r1.insert_t();
	r1.totalmarks();
	r1.percentage1();
	return 0;
}
