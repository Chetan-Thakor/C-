#include<iostream>
#include<stdlib.h>
using namespace std;
class in
{
	public:
	int x,y;
	in()
	{
		cout<<"hello everyone"<<endl;
	}
	
	~in()
	{
		cout<<"destructor called"<<endl;
	}
};

int main()
{
	in a1, *a2;
	//a2 = new in [5];
	//delete [] a2;
	
	a2 = (in *) malloc(sizeof(in)*5);
	return 0;
}
