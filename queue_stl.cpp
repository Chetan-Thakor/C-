#include<iostream>
#include<queue>
using namespace std;
int main()
{
	int N; //number of size of queue
	int S; //size of subset
	cout<<"enter the value of S"<<endl;
	cin>>S;
	queue<int> q1(N);
	cout<<q1.size();
	for(int i=0; i<q1.size(); i++)
	{
		int temp;
		cin >> temp;
		q1.push(temp);
	}
	
	cout<<"queue is:"<<endl;
	while(!q1.empty())
	{
		int temp;
		temp = q1.pop();
		cout<<temp<<" "<<endl;
		
	}
	
	return 0;
}
