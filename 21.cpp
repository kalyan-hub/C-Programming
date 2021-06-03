//AIM: Write a C++ program for addition of 4 numbers using default arguments
#include<iostream>
using namespace std;
void addition(int a=4,int b=5,int c=6,int d=7);
void addition(int a,int b,int c,int d)
{
	int add;
	add=a+b+c+d;
	cout<<"addition="<<add<<endl;
}
int main()
{
	int a,b,c,d;
	cout<<"Enter a,b,c,d values: ";
	cin>>a>>b>>c>>d;
	addition(a,b,c,d);
	addition();
	addition(a);
	return 0;
}
