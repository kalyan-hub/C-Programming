//Binary operator overloading using Friend function:
//Program to add two complex numbers.
#include<iostream>
using namespace std;
class complex
{
	private:
		float real,imag;
	public:
		void getdata()
		{
			cout<<"Enter real and imaginary";
			cin>>real>>imag;
		}
		void print()
		{
			cout<<"The sum is";
			cout<<real<<"+"<<imag<<"i"<<endl;
		}
	friend complex operator+(complex c1,complex c2);
};
complex operator+(complex c1,complex c2)
{
	complex temp;
	temp.real=c1.real+c2.real;
	temp.imag=c1.imag+c2.imag;
	return temp;
}
int main()
{
	complex c1,c2,c3;
	cout<<"Enter 1st complex number";
	c1.getdata();
	cout<<"Enter 2nd complex number";
	c2.getdata();
	c3=c1+c2;
	c3.print();
	return 0;
}

