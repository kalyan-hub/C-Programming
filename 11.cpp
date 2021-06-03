#include<iostream>
using namespace std;
class student
{
	char name[30];
	int std_id;
	float percentage;
	public:
		void getdata()
		{
			cout<<"Enter the name,ID and percentage os the student";
			cin>>name>>std_id>>percentage;
		}
		void printdata()
		{
			cout<<"Name="<<name<<endl;
			cout<<"student id is"<<std_id<<endl;
			cout<<"Percentage obtained is"<<percentage<<"%";
		}
};
int main()
{
	student stu1;
	stu1.getdata();
	stu1.printdata();
	return 0;
}
