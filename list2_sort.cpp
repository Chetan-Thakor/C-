#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int> lst1, lst2;
	int i;
	for(i=0; i<10; i+=2)
	{	
		lst1.push_back(rand() % 20);
	}
	
	for(i=1; i<11; i+=2)
	{
		lst2.push_back(rand() % 20);
	}
	cout<<"content of lst1:"<<endl;

	list<int> :: iterator p = lst1.begin();
	while(p != lst1.end())
	{
		cout<<*p<<" ";
		p++;
	}

	cout<<endl<<endl;
	p = lst2.begin();
	cout<<"content of lst2:"<<endl;
	while(p != lst2.end())
	{
		cout<<*p<<" ";
		p++;
	}
	
	cout<<endl<<endl;
	
	/*//sorting
	lst1.sort();
	p = lst1.begin();
	while(p != lst1.end())
	{
		cout<<*p<<" ";
		p++;
	}

	cout<<endl<<endl;
	
	lst2.sort();
	p = lst2.begin();
	while(p != lst2.end())
	{
		cout<<*p<<" ";
		p++;
	}*/

	//merging lst1 and lst2 into lst1
	p = lst1.begin();
	lst1.merge(lst2);
	if(lst2.empty())
	{
		cout<<"lst2 is empty"<<endl;
	}

	cout<<"content of lst1 after merging:"<<endl;
	while(p != lst1.end())
	{
		cout<<*p<<" ";
		p++;
	}
	return 0;
}
