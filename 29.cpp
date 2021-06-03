//AIM: Develop the C++ program to illustrate the order of exection of Constructors and Destructors in Inheritance
#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"BASE CLASS CONSTRUCTOR"<<endl;
		}
        ~A()
		{
			cout<<"BASE CLASS DESTRUCTOR"<<endl;
		}		
};
class B:public A
{
	public:
		B()
		{
			cout<<"DERIVED CLASS CONSTRUCTOR"<<endl;
		}
        ~B()
		{
			cout<<"DERIVED CLASS DESTRUCTOR"<<endl;
		}		
};
int main()
{
	B b;
	return 0;
}

