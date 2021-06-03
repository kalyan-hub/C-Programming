//AIM:Develop a C++ program to implement an object as a base class
#include<iostream>
using namespace std;
class DOB
{
	public:
		int dd,mm,yy;
	public:
		void get()
		{
			cout<<"Enter Date of birth :"<<endl;
			cin>>dd>>mm>>yy;
		}
		void show()
		{
			cout<<"Date of birth ="<<dd<<"-"<<mm<<"-"<<yy;
		}
};
class student
{
	public:string name;
	int pinno;
	DOB d;
	public:
		void getdata()
		{
			cout<<"Enter name and pinno :";
			cin>>name>>pinno;
			d.get();
		}
		void point()
		{
			cout<<"Name ="<<name<<endl;
			cout<<"Pin no ="<<pinno<<endl;
			d.show();
		}
};
int main()
{
	student s;
	s.getdata();
	s.point();
	return 0;
}
