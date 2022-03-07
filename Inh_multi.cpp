#include<iostream>
using namespace std;

class employee
{
	int id_no;
	int salary;
	public:

	employee()
	{
		id_no = 0;
		salary = 0;
	}

	void disp()
	{
		cout<<"the id number of employee is:"<<id_no<<endl;
		cout<<"the salary of employee is:"<<salary<<endl;
		
	}

};

class trainee: public employee
{
	public:
	int stipend;

	/*trainee(int a)
	{
		stipend = a;
	}*/
	
	void disp1()
	{
		cout<<"the trainee's stipend is:"<<stipend<<endl;
	}

};

class student: public trainee
{
	public:
	
	int math;
	int sci;
	student(int a, int b)
	{
		math = a;
		sci = b;
	}
	void disp2()
	{
		cout<<"the student mark in maths:"<<math<<endl;
		cout<<"the student mark in science:"<<sci<<endl;

	}
};

int main()
{
	employee e1;	
	trainee t1;
	t1.disp();
	//trainee t1(10000);
	//t1.disp();
	
	


	return 0;
}
