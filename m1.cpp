#include<iostream>
using namespace std;
class student
{
	public:
		string name;
		string branch;
		void getst()
		{
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enter branch:";
			cin>>branch;
		}
};
class marks:public student
{
	public:
		int pinno;
		float m1,m2,m3,m4,m5;
		void getm()
		{
			
			cout<<"Enter pinno:";
			cin>>pinno;
			cout<<"Enter student marks:";
			cin>>m1>>m2>>m3>>m4>>m5;
		}
		void printm()
		{
			cout<<"name="<<name;
			cout<<"Branch="<<branch;
			cout<<"Pinno="<<pinno;		
			}
};
class percentage:public marks
{
	float per;
	public:
		void result()
		{
			per=(m1+m2+m3+m4+m5)/5;
			cout<<"percentage="<<per;
		}
};
int main()
{
	percentage p;
	p.getst();
	p.getm();
	p.printm();
	p.result();
	return 0;
}
