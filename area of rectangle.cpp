#include<iostream>
using namespace std;
class area
{
	protected:
		void calarea(int l,int b)
		{
			cout<<"area of rectangle="<<l*b;
		}
};
class perimeter
{
	protected:
		void calperimeter(int l,int b)
		{
			cout<<"perimeter of rectangle="<<2*(l+b);
		}
};
class rectangle:public area,perimeter
{
	public:
		int l,b;
		void result()
		{
			cout<<"enter l and b values";
			cin>>l>>b;
			calarea(l,b);
			calperimeter(l,b);
		}
};
int main()
{
	rectangle R;
	R.result();
	return 0;
}
