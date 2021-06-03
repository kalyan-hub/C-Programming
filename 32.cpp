//AIM: Program to implement single inheritance
#include<iostream>
using namespace std;
class person
{
	protected:
		char name[20];
		int age;
		char gender;
	void get()
	{
		cout<<"Enter Name,age,gender:";
		cin>>name>>age>>gender;
	}
};
class student:public person
{
	int pinno;
	char college[20];
	public:
		void get_stu()
		{
			get();
			cout<<"Enter Pin no and college name"<<endl;
			cin>>pinno>>college;
		}
		void print()
		{
			cout<<"NAME: "<<name<<endl;
			cout<<"AGE: "<<age<<endl;
			cout<<"GENDER:"<<gender<<endl;
			cout<<"PINNO:"<<pinno<<endl;
			cout<<"COLLEGE NAME:"<<college<<endl;
		}
};
int main()
{
	student s;
	s.get_stu();
	s.print();
	return 0;
}
