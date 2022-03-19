/*Question 5:Write a cpp program that shows a menu: 
1: enter student detail 2: find student 
If the user selects 1: then it will ask for some details like: ID, student name, branch, Location. Save all these information in the file. Each student's details will be stored in one line. 
If the user selects 2: ask for the ID from the user that is needed to be searched. Then look for this id in the file (database). If it is available then return all the information about the particular student. If the ID is not available, then print some error message.*/

#include<iostream>
#include<fstream>
#include<string.h>
using namespace std;
		/* PRESS: 1 for enter the student details
		   PRESS: 2 for find the student
		*/
fstream fout;
class student
{
	public:
	int ID;	
	string name, branch;
	string loc;	//cities name; 
};


int main()
{
	student s1[20];
	fout.open("sample3.txt", ios :: out| ios :: in);
	s1[0].ID = 1;
	s1[0].name = "rahul";
	s1[0].branch = "electronics";
	s1[0].loc = "anand";

	s1[1].ID = 2;
	s1[1].name = "mukesh";
	s1[1].branch = "computer";
	s1[1].loc = "vadodara";

	for(int j=0; j < 2; j++)
	{
		fout << s1[j].ID<<"\t";
		fout << s1[j].name<<"\t";
		fout << s1[j].branch<<"\t";
		fout << s1[j].loc<<endl;
	}

	string st;
	int count = 0, choice, n;
	cout<<"enter the choice number"<<endl;
	cin >> choice;
	switch(choice)
	{
		case 1:
		cout<<"how many number of students details you want to add?"<<endl;
		cin>>n;
		cout<<"--------------"<<endl;
		for(int j = 2; j < 2+n; j++)
		{
			cin >> s1[j].ID;
			cin >> s1[j].name;
			cin >> s1[j].branch;
			cin >> s1[j].loc;
		} 
		
		if(n != 0)
		{
			for(int j=2; j< 2+n; j++)
			{
				fout << s1[j].ID<<"\t";
				fout << s1[j].name<<"\t";
				fout << s1[j].branch<<"\t";
				fout << s1[j].loc<<endl;
			}
		}

		case 2:
		cout<<"enter the ID number of student, that's you want to be search"<<endl;
		int search_ID, m, k;
		string temp;
		cin >> search_ID;
		fout.seekg(0, ios :: beg);
		while(fout >> m)
		{
			if(m == search_ID)
			{
				cout<<m<<"\t";
				for(k=0 ; k<3; k++)
				{
					fout >> temp;
					cout<<temp<<"\t";
				}
				if(k == 3)
				{
					break;
				}
				
			}
		}
		cout<<endl;					
	}
	
	return 0;
}
