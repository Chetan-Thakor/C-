#include<iostream>
using namespace std;


namespace NS1
{
	int i;
	namespace NS2	//a nested namespace
	{
		int j;
	}
}
int main()
{
	NS1 :: i = 19;
	// NS2 :: j =10; error, NS2 is not in view

	NS1 :: NS2 :: j = 10; //this is right

	cout<< NS1 :: i <<" "<< NS1::NS2::j << endl;
	
	using namespace NS1;
	using namespace NS1::NS2;
		
	cout<<i * j << endl;
	return 0;
}
