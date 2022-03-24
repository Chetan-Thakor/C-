#include<iostream>
#include<map>
#include<string.h>
using namespace std;


class name
{
	char str[40];
	
	public:
		
	name()
	{
		strcpy(str, " ");
	}

	name(char *s)
	{
		strcpy(str,s);
	}
	
	char *get()
	{
		return str;
	}
};


bool operator <(name a, name b)
{
	return strcmp(a.get(), b.get()) < 0;
}
class phone_no
{
	char str[40];
	
	public:
		
	phone_no()
	{
		strcpy(str, " ");
	}

	phone_no(char *s)
	{
		strcpy(str,s);
	}
	
	char *get()
	{
		return str;
	}
};
int main()
{
	map<name, phone_no> directory;
	//put names and number into map

	directory.insert(pair<name, phone_no>(name("Emp1"), phone_no("555-1111")));
	directory.insert(pair<name, phone_no>(name("Emp2"), phone_no("555-2222")));
	directory.insert(pair<name, phone_no>(name("Emp3"), phone_no("555-3333")));
	directory.insert(pair<name, phone_no>(name("Emp4"), phone_no("555-4444")));

	char str[40];
	cin >> str;
	
	map<name, phone_no> :: iterator p;
	p = directory.find(name(str));  //find() is a function for search
	if(p != directory.end())
	{
		cout<<"phone number "<<p->second.get()<<endl;
	}

	else
	{
		cout<<"name not in directory"<<endl;
	}
	return 0;
}
