//AIM: develop a C++ program to illustrate multi-catch exceptions
#include<iostream>
using namespace std;
int main()
{
	try
	{
		int x;
		cout<<"Enter x value";
		cin>>x;
		if(x==1)
		throw x;
		else if(x==2)
		throw 'a';
		else
		throw 32.56;
	}
    catch(int x)
	{
		cout<<"Integer exception";
	}
	catch(char ch)
	{
		cout<<"Character exception";
	}
	catch(double d)
	{
		cout<<"Double exception";
	}
	return 0;
}
