//AIM: To write a C++ program  to illustrate the copy constructors
#include<iostream>
using namespace std;
class sample
{
	private:
		int x,y;
	public:
		sample()
		{
			cout<<"Enter x,y values : ";
			cin>>x>>y;
		}
		void display()
		{
			cout<<"x="<<x<<endl;
			cout<<"y="<<y<<endl;
		}
		sample(sample &s)
		{
			x=s.x;
			y=s.y;
		}
};
int main()
{
	sample s1;
	sample s2=s1;
	cout<<"Normal Constructor"<<endl;
	s1.display();
	cout<<"Copy Constructor"<<endl;
	s2.display();
	return 0;
}
