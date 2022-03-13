#include<iostream>
using namespace std;	

int main()
{	
	int n1, n2;
	cout<<"the value of n1 is:\n";
	cin>>n1;
 	cout<<"the value of n2 is:\n";
	cin>>n2;
	try
	{
		if(n2 != n1)
		{
			float div = (float) n1 / n2;
			if(div < 0)
			{
				throw 'e';
				cout<<"n1 / n2 = "<<div;
				
			}
			else
			{
				throw n2;
			}
		}
		
		
	}	
		
		catch(int e)
		{
			cout<<"exception: division zero";
		}		

		catch(char st)
		{
			cout<<"exception: division is less than 1";
		}
	
		catch(...)
		{
			cout<<"exception: unknown";
		}
	
	return 0;
}
