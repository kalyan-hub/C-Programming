#include<iostream>
using namespace std;
void swap(int&,int&);
void swap(int&x,int&y)
{
	int temp;
	temp=x;
	x=y;
	y=temp;
}
int main()
{
	int a=10,b=20;
	cout<<"a,b before swapping:"<<a<<"  "<<b<<endl;
	swap(a,b);
	cout<<"a,b after swapping:"<<a<<"  "<<b;
}

