//AIM: Program to implement virtual base class
#include<iostream>
using namespace std;
class A
{
	public:
		void Show_A()
		{
			cout<<"Show method of class A"<<endl;
		}
};
class B: virtual public A
{
	public:
		void Show_B()
		{
			cout<<"Show method of class B"<<endl;
		}
};
class C: virtual public A
{
	public:
		void Show_C()
		{
			cout<<"Show method of class C"<<endl;
		}
};
class D:public B,public C
{
	public:
		void Show_D()
		{
			cout<<"Show method of class D"<<endl;
		}
};
int main()
{
	D d;
	d.Show_D();
	d.Show_C();
	d.Show_B();
	d.Show_A();
	return 0;
}
