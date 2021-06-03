//AIM: Develop C++ program to illustrate class templates with multiple arguments
#include<iostream>
#include<conio.h>
using namespace std;
template<class T1,class T2>
class sample
{
	T1 a;
	T2 b;
	public:
		void getdata()
		{
			cout<<"Enter a and b values "<<endl;
			cin>>a>>b;
		}
		void display()
		{
			cout<<"Displaying value"<<endl;
			cout<<"a="<<a<<endl;
			cout<<"b="<<b<<endl;
		}
};
int main()
{
	sample<int,float>s1;
	sample<int,char>s2;
	sample<float,char>s3;
	cout<<"Integer and float data"<<endl;
	s1.getdata();
	s1.display();
	cout<<"Integer and char data"<<endl;
	s2.getdata();
	s2.display();
	cout<<"Float and char data"<<endl;
	s3.getdata();
	s3.display();
	return 0;
}
