#include<iostream>
using namespace std;
class employee
{
	char name[30];
	int ep_id;
	float salary;
	public:
		void getdata()
		{
			cout<<"Enter the name,ID and salary of the employee";
			cin>>name>>ep_id>>salary;
		}
		void printdata()
		{
			cout<<"Name="<<name<<endl;
			cout<<"employee id is"<<ep_id<<endl;
			cout<<"Salary of employee"<<salary<<"/-";
		}
};
int main()
{
	employee ep1;
	ep1.getdata();
	ep1.printdata();
	return 0;
}
