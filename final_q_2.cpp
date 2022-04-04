#include<iostream>
using namespace std;
class charInput
{
    string t;    
    public:
        void add(char c)
       	{
            t = t + c;
        }
        string getValue()
       	{ 
            return t;
        }
};

class numInput : public charInput
{
    string t;
    public:
        void add(char c)
       	{
            if(c>='0' && c<='9')
	    {
                t = t + c;
            }
        }

        string getValue()
       	{ 
            return t;
        }
};


int main()
{
       	numInput *c1;
	c1 = new numInput();
	c1->add('1');
	c1->add('c');
	c1->add('d');
	c1->add('e');
	c1->add('0');
	cout<< c1->getValue() <<endl;
	return 0;
}
