#include<iostream>
using namespace std;
class student
{
	protected:
		string name;
		string branch;
		void getst()
		{
			cout<<"Enter name:";
			cin>>name;
			cout<<"Enetr branch:";
			cin>>branch;
		}
};
class marks:public student
{
	protected:
		int pinno;
		float m1,m2,m3,m4;
		void getm()
		{
			getst();
			cout<<"\nenter pin no:";
			cin>>pinno;
			cout<<"\nenter marks:";
			cout<<"\nenter m1:";
			cin>>m1;
			cout<<"\nenter m2:";
			cin>>m2;
			cout<<"\nenter m3:";
			cin>>m3;
			cout<<"\nenter m4:";
			cin>>m4;
		}
		void print()
		{
			cout<<"Name:"<<name<<endl;
			cout<<"Branch"<<branch<<endl;
			cout<<"pinno="<<pinno<<endl;
		}
};
class project
{
	protected:
		float ip,ep;
		void getp()
		{
			cout<<"Enetr ip and ep :";
			cin>>ip>>ep;
		}
};
class percentage:public marks,project
{
	float per;
	public:
		void result()
		{
			getm();
			getp();
			per=(m1+m2+m3+m4+ip+ep)/6;
			print();
			cout<<"percentage="<<per;
		}
};
int main()
{
	percentage p;
	p.result();
	return 0;
}
