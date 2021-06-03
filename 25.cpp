//Unary operator overloading using Friend function:
#include<iostream>
using namespace std;
class sample
{
	private: int x;
	public:
		void get()
		{
			x=30;
		}
		void print()
		{
			cout<<"x="<<x;
		}
		friend void operator++(sample &s);
};
void operator++(sample &s)
{
	++s.x;
}
int main()
{
	sample s;
	s.get();
	++s;
	s.print();
	return 0;
}
