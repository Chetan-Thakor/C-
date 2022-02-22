#include<iostream>
using namespace std;

int sum(int a,int b,int c)
{
	return a+b+c;
}

float sum(float a,float b,float c)
{
	return a+b+c;
}
int main()
{
	cout<<"sum is:"<<sum(1,2,3)<<endl;
	cout<<"sum is:"<<sum(1.0f,2.0f,3.0f)<<endl;
	return 0;
}
