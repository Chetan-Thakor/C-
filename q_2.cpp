/*Question 2:Count the number of words that has 'a' in them*/

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;

int main()
{

	ifstream fin;
	string st;
	int count = 0;
	fin.open("sample.txt");
	while (!fin.eof()) 
	{		
        	fin >> st;
		if(fin.eof())
		{
			break;
		}
			
		for(int i=0; i < st.length(); i++)
		{
			if(st[i] == 'a')
			{
				count++;
				break;
			}

		}	
				
   	}
	fin.close();
	cout<<"the word has contain 'a',occured in file:"<<count<<"times"<<endl;
	return 0;
}
