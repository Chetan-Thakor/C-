/*Question 3:Count the number of words that has 'a' in them*/

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{

	ifstream fin;
	string st;
	int count = 0;
	fin.open("sample1.txt");
	while (!fin.eof()) 
	{		
        	fin >> st;
		if(fin.eof())
		{
			break;
		}
	
		if(st[0] == 'e')
		{
			count++;
		}
				
   	}
	fin.close();
	cout<<"the word has started from 'e',occured in file:"<<count<<"times"<<endl;
	return 0;
}
