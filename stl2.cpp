#include<iostream>
#include<vector>
using namespace std;

int main()
{
	vector <char> v(10); //create a vector of length 10
	vector <char> :: iterator p;
	int i;
	p = v.begin();
	i = 0;
	while(p != v.end())
	{
		*p  = i + 'a';
		p++;
		i++;
	}
	cout<<"original content"<<endl;
	p = v.begin();
	while(p != v.end())
	{
		cout<<*p<<" ";
		p++;
	}
	// change content of vector

	p = v.begin();
	while(p != v.end())
	{
		*p = toupper(*p);
		p++;
	}

	cout<<"modified content"<<endl;
	
	while(p != v.end())
	{
		cout<<*p<<" ";
		p++;
	}
	return 0;
}

