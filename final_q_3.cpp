#include<iostream>
#include<string>

using namespace std;

int main()
{
    string t;
    cout<<"Enter a binary string: ";
    cin>>t;
    cout<<endl;
    for(int i=0;i<t.length();i++)
    {
        if(t[i]=='0' || t[i]=='1'){
            cout<<t[i]<<" ";
        }
    }
    cout<<"length: "<<t.length()<<endl;

    int count = 0;

    for(int i=0;i<t.length();i++)
    {
        if(t[i]=='0' && t[i+1]=='1'){
            count++;
        }
    }

    if(t.length()% 2 == 0)
    {

        for(int i=0;i<t.length();i++)
	{
            string temp = t;
            if(i%2==0)
	    {

                if(i==t.length()-2)
		{
                    char temp2 = temp[0];
                    temp[0] = temp[i];
                    temp[i] = temp2;
                } 
                else if(i==t.length()-1)
		{
                    char temp2 = temp[0];
                    temp[0] = temp[i];
                    temp[i] = temp2;
                }
                else
		{
                    char temp2 = temp[i+2];
                    temp[i+2] = temp[i];
                    temp[i] = temp2;
                }
                cout<<"string after "<<i <<": "<<temp<<endl;
                if(temp[i]=='0' && temp[i+1]=='1')
		{
                    count++;
                }
            }
	    else
	    {
                if(i==t.length()-1)
		{
                    char temp2 = temp[1];
                    temp[1] = temp[i];
                    temp[i] = temp2;
                }
                else if(i==t.length()-2)
		{
                    char temp2 = temp[1];
                    temp[1] = temp[i];
                    temp[i] = temp2;
                }
                else
		{
                    char temp2 = temp[i+2];
                    temp[i+2] = temp[i];
                    temp[i] = temp2;
                }
                cout<<"string after "<<i <<": "<<temp<<endl;
                if(temp[i]=='0' && temp[i+1]=='1'){
                    count++;
                }
            }
        }

    }

    else
    {
        for(int i=0;i<t.length();i++)
	{
            string temp = t;
            if(i%2!=0)
	    {

                if(i==t.length()-2)
		{
                    char temp2 = temp[1];
                    temp[1] = temp[i];
                    temp[i] = temp2;
                } 
                else if(i==t.length()-1)
		{
                    char temp2 = temp[1];
                    temp[1] = temp[i];
                    temp[i] = temp2;
                }
                else
		{
                    char temp2 = temp[i+2];
                    temp[i+2] = temp[i];
                    temp[i] = temp2;
                }
                cout<<"string after "<<i <<": "<<temp<<endl;
                if(temp[i]=='0' && temp[i+1]=='1')
		{
                    count++;
                }
            }
	    else
	    {
                if(i==t.length()-1)
		{
                    char temp2 = temp[1];
                    temp[1] = temp[i];
                    temp[i] = temp2;
                }
                else if(i==t.length()-2)
		{
                    char temp2 = temp[1];
                    temp[1] = temp[i];
                    temp[i] = temp2;
                }
                else
		{
                    char temp2 = temp[i+2];
                    temp[i+2] = temp[i];
                    temp[i] = temp2;
                }
                cout<<"string after "<<i <<": "<<temp<<endl;
                if(temp[i]=='0' && temp[i+1]=='1')
		{
                    count++;
                }
            }
        }
    }
    cout<<"count: "<<count<<endl;
    return 0;
}
