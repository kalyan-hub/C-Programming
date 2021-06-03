//Unary operator overloading without using Friend function:
#include<iostream>
using namespace std;
class sample
{
	private:
		int x;
	public:
		void getdata()
		{
			cout<<"enter x value"<<endl;
			cin>>x;
		}
		void show()
		{
			cout<<"X="<<x<<endl;
		}
		void operator++()
		{
			++x;
		}
};
int main()
{
	sample s;
	s.getdata();
	s.show();
	return 0;
}
