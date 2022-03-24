#include<iostream>
#include<map>
using namespace std;

int main()
{
	map<char, int> m;
	int i;

	//put pairs into map
	for(i=0; i<26; i++)
	{
		m.insert(pair<char, int>('A'+i, 65+i));
	}

	char ch;
	cout<<"enter the key(an uppercase letter):"<<endl;
	cin>>ch;
	
	map<char, int> :: iterator p;

	//find the value of given key

	p = m.find(ch);
		
	if(p != m.end())
	{
		cout<<"its ascii value is"<<p->second<<endl;
	}
	
	else
	{
		cout<<"key not in map"<<endl;
	}
	return 0;
}
