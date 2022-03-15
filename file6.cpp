#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{
	fstream fin, fout;
	fin.open("simple.txt");
	fout.open("simple1.txt");
	char ch;
	while(!fin.eof())
	{
		fin.get(ch);
		fout<<ch;		
	}
	cout<<"copy done:"<<endl;
	fin.close();
	fout.close();
return 0;

}
