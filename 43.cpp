#include<iostream>
using namespace std;
class base
{
	private:
		int a=10;
	public:
		int b=20;
	protected:
		int c=30;
	public:
		void call()
		{
			cout<<"Base class variable values"<<endl;
			cout<<"Value of a ="<<a<<endl;
			cout<<"Value of b ="<<b<<endl;
			cout<<"Value of c ="<<c<<endl;
		}
};
class Derived :public base
{
	public:
		void call()
		{
			cout<<"Derived class variable values"<<endl;
			cout<<"Value of b ="<<b<<endl;
			cout<<"Value of c ="<<c<<endl;
		}
};
int main()
{
	base b;
	b.call();
	Derived d;
	d.call();
	cout<<"\n Accessing variable of base class outside class"<<endl;
	cout<<"Value of b "<<b.b<<endl;
	return 0;
}
