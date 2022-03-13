#include<iostream>
using namespace std;

class shape		//abstract class due to virtual function present in this class
{
	protected:
	float x;
	public:
	
	void getdata()
	{
		cin >> x;
	}
	
	virtual float calculateArea() = 0;
	
};

class square: public shape
{
	public:
	
	float calculateArea()
	{
		return x*x;
	}
};

int main()
{
	square s1;
	s1.getdata();
	cout<<s1.calculateArea()<<endl;
		
	return 0;
}
