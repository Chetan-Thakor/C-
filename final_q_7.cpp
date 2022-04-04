#include<stdio.h>
#include<bits/stdc++.h>
using namespace std;

int square(int l, int w)
{
	int side = __gcd(l, w);
	return (l * w) / (side * side);
}

int main()
{
	int len, wid;
	cout<<"enter the length"<<endl;
	cin>>len;
	cout<<"enter the width"<<endl;
	cin>>wid;

	cout <<"ans = "<< square(len, wid) << endl;
	return 0;
}
