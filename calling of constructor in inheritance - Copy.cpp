#include<iostream>
using namespace std;
class A
{
	public:
		A()
		{
			cout<<"Base class A constructor";
		}
		~A()
		{
				cout<<"Base class A destructor";
		}
};
class B:public A
{
	public:
		B()
		{
			cout<<"Base class B constructor";
		}
		~B()
		{
				cout<<"Base class B destructor";
		}
};
class C:public B
{
	public:
		C()
		{
			cout<<"Base class C constructor";
		}
		~C()
		{
				cout<<"Base class C destructor";
		}
};
int main()
{
	C c;
	return 0;
}
