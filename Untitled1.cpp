#include<iostream>
using namespace std;
class employee
{
	private:
	string ename;
	int eid;
	protected:
		void gete()
		{
			cout<<"enter ename:";
			cin>>ename;
			cout<<"enter eid";
			cin>>eid;
		}
		void printe()
		{
			cout<<"name="<<ename<<endl;
			cout<<"eid="<<eid<<endl;
		}
};
class contract:public employee
{
	int hr;
	float salary;
	public:
		void getc()
		{
			gete();
			cout<<"enter hr=";
			cin>>hr;
			cout<<"enter salary=";
			cin>>salary;
		}
		void printc()
		{
			cout<<"the gross salary of contract employee="<<(hr*salary)<<endl;
		}
};
		class permanent:public employee
		{
			float basicsalary,hra,da;
			public:
				void getp()
				{
					cout<<"enter basic salary";
					cin>>basicsalary;
					cout<<"hra="<<(0.1*basicsalary);
					cout<<"da="<<(0.05*basicsalary);
				}
				void printp()
				{
					cout<<"gross salary="<<(basicsalary+hra+da);
				}
		};
		int main()
		{
			contract c;
			permanent p;
			c.getc();
			c.printc();
			p.getp();
			p.printp();
			return 0;
		}

