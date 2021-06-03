//AIM:Develop a C++ program to illustrate scope resolution

//program for scope resolution operator
#include<iostream>
using namespace std; 
int a=100,b=500;
int main()
{
	int a=50;
	cout<<"value of LOCAL a is="<<a<<endl;
	cout<<"value of GLOBAL a is="<<a<<endl;
	cout<<"value of b is="<<b<<endl;
	::a=200;
	cout<<"value of GLOBAL a is="<<::a;
	return 0;
}
