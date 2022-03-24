#include<iostream>

using namespace;

int main()
{
	vector <char> v(10);
	int i;
	cout <<"size "<<v.size()<<endl;
	for(i = 0; i<10; i++;)
	v[i] = i + 'a';
	cour<<"current context"<<endl;
	for(i = 0; i<v.size(); i++)
	{
		cout<<v[i]<<" "<<endl;
	} 


	cout<<"expanding vector"<<endl;
	for(i = 0; i<10; i++)
	{
		v.push_back(i + 10 + 'a');
		cout<<"size now = "<< v.size()
		

	}

	cout<<"current context:"<<endl;
	for(i=0; i<v.size(); i++)
	{
		cout<<v[i]<<endl;
		cout<<
	}

	














	return 0;
}
