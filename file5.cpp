#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	ifstream fin;
	fin.open("simple.txt");
	int count = 0;
	char word[30];
	if(!fin)
	{
		cout<<"file did not open"<<endl;
	
	}

	else
	{
		while(!fin.eof())
		{
			fin >> word;
			count++;
		}
	}
	cout<<"total words is:"<<count<<endl;
	fin.close();
return 0;

}
