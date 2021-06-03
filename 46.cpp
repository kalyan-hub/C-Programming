//AIM:Devlop a C++ program to illustrate Exception handling
#include<iostream>
using namespace std;
int main()
{
	int x=50,y=0;
	try
	{
		if(y==0)
		throw"divide by zero";
		else
		cout<<"value is :"<<(x/y);
	}
	catch(const char * msg)
	{
		cout<<"Error :"<<msg<<endl;
	}
	return 0;
}
