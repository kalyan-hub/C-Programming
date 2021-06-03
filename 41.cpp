//AIM: Develop a C++ program for implementation of Run time polymorphism
#include<iostream>
using namespace std;
class base
{
	public:
		virtual void display()
		{
			cout<<"Base class is called";
		}
};
class derived:public base
{
	public:
		void display()
		{
			cout<<"Derived class is called";
		}
};
int main()
{
	base ptr;
	base b;
	bptr=&b;
	bptr->display();
	derived d;
	bptr=&d;
	bptr->display();
	return 0;
}
