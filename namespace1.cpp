#include<iostream>
using namespace std;

namespace counterNamespace
{
	int upperbound, lowerbound;
	class counter
	{
		int count;
		public:
		
		counter(int n)
		{
			if(n <= upperbound)
			{
				count = n;
			}
			
			else
			{
				count = lowerbound;			
			}
		}// end counter
		
		void reset(int n)
		{
			if(n <= upperbound)
			{
				count = n;
			}
			
			else
			{
				count = lowerbound;			
			}
		}
	
		int run()
		{
			if(count>lowerbound)
			{
				return count--;
			} 
			else 
			{
				return lowerbound;
			}
		}
	};
}
int main()
{

	counterNamespace :: upperbound = 100;
	counterNamespace :: lowerbound = 0;
	counterNamespace :: counter ob1(10);
	int i;
	do
	{
		i = ob1.run(); 		//once object is created we don't need ::
		cout<<i<<" ";
	}while(i > counterNamespace :: lowerbound);

	cout<<endl;
	
	counterNamespace :: counter ob2(20);
	
	do
	{
		i = ob2.run();
		cout<<i<<" ";
	}while(i > counterNamespace :: lowerbound);
	cout<<endl;

	ob2.reset(100);

	counterNamespace :: lowerbound = 90;
	
	do
	{
		i = ob2.run();
		cout<<i<<" ";
	}while(i > counterNamespace :: lowerbound);
	return 0;
}
