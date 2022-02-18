#include<iostream>
using namespace std;
class calcu
{
	public:	
	int t1,t2;

	void setInput(int a, int b){
		t1=a;
		t2=b;
	}

	int add(calcu,calcu);
	int sub(calcu,calcu);
	int div(calcu,calcu);
	int mul(calcu,calcu);
	int fact()
	{
		int fact=1;
		for(int i=1;i<=t1;i++){
			fact=fact*i;
		}
		return fact;
	}
	

};
int calcu ::  add(calcu c,calcu c1)
	{				//returning sum of object
		return c.t1+c1.t1;
	}
int calcu ::  sub(calcu c,calcu c1)
	{				//returning sub of object
		return c.t1-c1.t1;
	}
int calcu ::  div(calcu c,calcu c1)
	{				//returning div of object
		return c.t1/c1.t1;
	}
int calcu :: mul(calcu c,calcu c1)
	{
		return c.t1 * c1.t1;	//returning mul of object;
	}
int main(){
	int x,y;
	char choice;
	calcu obj1,obj2,temp;
	int out;
	cout << "Enter choice:";
	cin >> choice;
	cout << "Enter 2 number:";
	cin >> x >> y;
	
	obj1.setInput(x,y);
	obj2.setInput(y,x);
	
	switch (choice)
	{
	 
	case '+':
	 	out= obj1.add(obj1,obj2);
	 	break;
 	case '-':
	 	out= obj1.sub(obj1,obj2);
	 	break;
 	case '*':
	 	out= obj1.mul(obj1,obj2);
	 	break;
 	case '/':
	 	out= obj1.div(obj1,obj2);
	 	break;
 	default:
	cout<<"invalid choice\n";
 	
	}
	if(choice == '+' || choice == '/' || choice == '-' || choice == '*')
	cout << "ans is:" << out << endl;
	else
	cout<<"exit";
	return 0;
}
