#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	ifstream input;
	string str;
	input.open("simple.txt");
	if(!input)
	{
		cout<<"file did not open"<<endl;
	
	}

	else
	{
		while(getline(input, str))
		{
			cout<<str<<endl;
		}
	}

return 0;

}
