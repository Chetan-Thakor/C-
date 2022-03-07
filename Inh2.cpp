#include<iostream>
using namespace std;

class person
{
	public:
	int a1;
	void disp()
	{
		cout<<"inside the public"<<endl;	
	}

	protected:
	int a2 = 5;
	cout<<"the value of a2"<<a2;
	void disp1()
	{
		cout<<"inside the protected"<<endl;	
	}

	private:
	int a3;
	void disp2()
	{
		cout<<"inside the private"<<endl;	
	}
};

class doctor: protected person
{
	char c, d;
};

int main()
{
	doctor d1;
	//d1.disp();
	//cout<<"the value of a2"<<a2;
	return 0;
}



