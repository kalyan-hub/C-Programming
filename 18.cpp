//AIM: Develop a C++ program demonstrating a Bank Account with necessary methods and variables

#include<iostream>
using namespace std;
#include<string.h>
class Account
{
	int accno;
	char name[20];
	float balance;
	public:
		void getdata()
		{
			cout<<"Enter Account Number:";
			cin>>accno;
			cout<<"Enter initial balance";
			cin>>balance;
			cout<<"Enter name of account holder";
			cin>>name;
		}
		void showdata()
		{
			cout<<"Name="<<name<<endl;
			cout<<"Account Number="<<accno<<endl;
			cout<<"Balance="<<balance<<endl;
		}
		void withdraw()
		{
			int amount;
			cout<<"Enter amount to withdraw"<<endl;
			cin>>amount;
			if((balance-amount)<500)
			cout<<"You must maintain minimum balance"<<endl;
			else
			balance-=amount;                               //bal=bal-amt
		}
		void deposit()
		{
			int amount;
			cout<<"Enter amount to deposit"<<endl;
			cin>>amount;
			balance+=amount;
		}
    };
    int main()
    {
    	Account Acc;
    	Acc.getdata();
		Acc.showdata();
		char choice;
		cout<<"Do you want to withdraw or deposit w/d"<<endl;
		cin>>choice;
		if(choice=='w')
		Acc.withdraw();
		else
		Acc.deposit();
		Acc.showdata();
	}
	
