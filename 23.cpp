//Program to find are of a rectangle using "this" pointer
#include<iostream>
using namespace std;
class rectangle
{
	private:
		float l,b;
		public:
			void getdata(float length,float breadth)
			{
				this->l=length;
				this->b=breadth;
			}
			void area()
			{
				cout<<"Area="<<l*b<<endl;
			}
};
int main()
{
	rectangle R1,R2;
	R1.getdata(10.5,5.5);
	R1.area();
	R2.getdata(7.5,2.5);
	R2.area();
	return 0;
}
