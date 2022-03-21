#include<iostream>
using namespace std;

template<class T1>

class simple
{
	T1 p;
		
	public:
	
	static int i=10;
	T1()
	{
		cout<<"value is:"<<++i<<endl;
	}
};

int main()
{
	simple s1;

	

	return 0;
}

/*//Class template and static variables



#include <iostream>

using namespace std;

template <class T> class Test
{
private:
T val;

public:
static int count;
Test()
{
count++;
}
// some other stuff in class
};

template<class T>



//Initialising static
int Test<T>::count = 0;

int main()
{
Test<int> a; // value of count for Test<int> is 1 now
Test<int> b; // value of count for Test<int> is 2 now
Test<double> c; // value of count for Test<double> is 1 now
cout << Test<int>::count << endl; // prints 2
cout << Test<double>::count << endl; //prints 1



return 0;
}*/
