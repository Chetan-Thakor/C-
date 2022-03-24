#include<iostream>
#include<list>
using namespace std;

int main()
{
	list<int> lst;
	int i;
	for(i=0; i<10; i++)
	{
		lst.push_back(i);
	}

	cout<<"size of vector is:"<<lst.size()<<endl;
	cout<<"contents:"<<endl;
	list<int> :: iterator p = lst.end();
	while(p != lst.begin())
	{
		cout<< *p << " ";
	}
	cout<< "\n\n";
	p = lst.end();
	
	while(p != lst.begin())
	{
		*p = *p + 100;	
		p--;
	}

	cout<<"contents modified"<<endl;

	p = lst.end();
	while(p != lst.begin())
	{
		cout<<*p<<" "<<endl;
		p--;	
	}	
	return 0;
}

