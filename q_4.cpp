/*Question 4:Count the number of words that end with 's'*/

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{

	ifstream fin;
	string st;
	int count = 0;
	fin.open("sample2.txt");
	while (!fin.eof()) 
	{		
        	fin >> st;
		if(fin.eof())
		{
			break;
		}
		
		if(st[st.length() - 1] == 's')
		{
			count++;
		}			
   	}
	fin.close();
	cout<<"the word has ended with 's',occured in file:"<<count<<"times"<<endl;
	return 0;
}
