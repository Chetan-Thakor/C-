#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	fstream input;
	string str, str2, str3;
	input.open("simple.txt");
	if(!input)
	{
		cout<<"file did not open"<<endl;
	
	}

	else
	{
		while(!input.eof())
		{
			input >> str >> str2 >> str3;
			cout<<str\t<<str2<<str3<<endl;
		}
	}
	input.close();
return 0;

}
