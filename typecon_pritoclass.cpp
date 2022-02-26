#include<iostream>
using namespace std;
	
class Time
{
	int hour,min;
	public:
	
	Time(int p)
	{
		hour = p / 60;
		min = p % 60;
	}

	Time(float q)
	{
		hour = q;
		min = (q - hour) * 100;
	}
	
	void disp()
	{
		cout<<"hour:"<<hour<<endl;
		cout<<"minute:"<<min<<endl;
	}
};


int main()
{
	int x;
	float y;
	cout<<"enter the value, whatever you want"<<endl;
	cin>>x;
	Time a1(x);
	a1.disp();
	cout<<"for float to class"<<endl;
	cout<<"enter the value, whatever you want"<<endl;
	cin>>y;
	Time a2(y);
	a2.disp();
	return 0;
}
