//AIM: Program for Multi-path inheritance
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
class B:public A
{
	public:
		void Show_B()
		{
			cout<<"Show method of class B"<<endl;
		}
};
class C:public A
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
	d.Show_B();
	d.Show_C();
	d.Show_D();
	d.B::Show_A();
	d.C::Show_A();
	return 0;
}
