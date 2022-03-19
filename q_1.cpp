/*Question 1:Count the number of time the word 'the' is present in the file*/
#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{

	ifstream fin;
	char no[4] = "the";
	char str[20];
	int count = 0;
	fin.open("sample.txt");
	while (!fin.eof()) 
	{		
        	fin >> str;
		if(strcmp(str, no) == 0)
		{
			count++;
		}
   	}
	fin.close();
	cout<<"the word occured in file:"<<count<<"times"<<endl;
	return 0;
}
