//AIM: Unary operator overloading using member function:
#include<iostream>
using namespace std;
class sample
{
	private: int x;
	public:
		void getdata()
		{
			x=10;
		}
		void operator++()
        {
             x=x+1;
        }
		void print()
		{
			cout<<"x="<<x;
		}
};
int main()
{
	sample s;
	s.getdata();
	++s;
	s.print();
	return 0;
}
