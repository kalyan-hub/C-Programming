#include<iostream>
using namespace std;
class A
{
	public:
		A(int m)
		{
			cout<<"\nm="<<m;
		}
};
class B:public A
{
	public:
		B(int n):A(67)
		{
			cout<<"\nn="<<n;
		}
};
int main()
{
	B b(34);
	return 0;
}
