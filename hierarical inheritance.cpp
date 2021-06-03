#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"constructor of A base class";
		}
		~A()
		{
				cout<<"destructor of A base class";
		}
};
class B:public A
{
	public:
		B()
		{
				cout<<"constructor of B base class";
		}
		~B()
		{
				cout<<"destructor of B base class";
		}
};
class C:public A
{
	public:
		C()
		{
				cout<<"constructor of C base class";
		}
		~C()
		{
				cout<<"destructor of C base class";
		}
};
int main()
{
	C c;
	B b;
	return 0;
}
