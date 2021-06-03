//AIM:Develop a C++ program to illustrate function templates
#include<iostream>
using namespace std;
template<class T>
class sample
{
	private:
		T x,y;
	public:
		void getdata()
		{
			cout<<"Enter x&y values"<<endl;
			cin>>x>>y;
		}
		void add()
		{
			cout<<"Addition="<<x+y<<endl;
		}
};
int main()
{
	sample<int>s1;
	s1.getdata();
	s1.add();
	sample<float>s2;
	s2.getdata();
	s2.add();
	return 0;
}
