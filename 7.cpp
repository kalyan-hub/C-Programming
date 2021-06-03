#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	float a,b,c,disc,x1,x2,real,imaginary;
	cout<<"Enter the coefficients of the quadratic equation:"<<endl;
	cin>>a>>b>>c;
	disc=(b*b)-(4*a*c);
	if(disc>0)
	{
		cout<<"The roots are real and distinct";
		x1=(-b+sqrt(disc))/(2*a);
		x2=(-b-sqrt(disc))/(2*a);
		cout<<"The roots are:";
		cout<<"x1="<<x1<<endl;
		cout<<"x2="<<x2<<endl;
	}
	else if(disc==0)
	{
		cout<<"The roots are real and equal";
		x1=-b/(2*a);
		cout<<"The roots are:";
		cout<<"x1=x2="<<x1;
	}
	else
	{
		cout<<"The roots are imaginary and distinct";
		real=-b/(2*a);
		imaginary=sqrt(disc)/(2*a);
		cout<<"The roots are:";
		cout<<"x1="<<real<<"+"<<imaginary<<"i";
		cout<<"x2="<<real<<"-"<<imaginary<<"i";
	}
	return 0;
}
