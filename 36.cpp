//AIM:Develop a C++ program for implementation of Virtual Function
#include<iostream>
using namespace std;
class A
{
	public:
		virtual void print()
		{
			cout<<"Base class is invoked"<<endl;
		}
};
class B:public A
{
	public:
		void print()
		{
			cout<<"Derived class invoked";
		}
};
int main()
{
	A*ptr;
	B b;
	ptr=&b;
	ptr->print();
  }  
