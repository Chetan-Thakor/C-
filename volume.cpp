#include<iostream>
using namespace std;
int cube_volume(int a=3,int b=5,int c=5)
{
	return a*b*c;	
}

int main()
{
	//int l,w,b;
	cout<<cube_volume(1,2,3)<<endl;
	cout<<cube_volume(5)<<endl;
	cout<<cube_volume(2,4)<<endl;
	cout<<cube_volume()<<endl;
	return 0;
}


