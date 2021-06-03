//AIM: Binary operator overloading using member function:
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
	    complex operator+(complex c2)
        {
	         complex temp;
	         temp.real=real+c2.real;
             temp.imag=imag+c2.imag;
	         return temp;
        }
};
int main()
{
	complex c1,c2,c3;
	cout<<"Enter 1st complex number"<<endl;
	c1.getdata();
	cout<<"Enter 2nd complex number"<<endl;
	c2.getdata();
	c3=c1+c2;
	c3.print();
	return 0;
}
