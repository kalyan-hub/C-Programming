#include<iostream>
using namespace std;
class product
{
	public:protected:
		int myear;
		int waranty;
		void getp()
		{
			cout<<"enter the waranty of product";
			cin>>waranty;
			cout<<"enter the manufacture year";
			cin>>myear;
		}
		void printp()
		{
			cout<<"waranty="<<waranty;
			cout<<"myear="<<myear;
		}
	};
	class manufacture
	{
		public:protected:
			string brand;
			string country;
			void getm()
			{
				cout<<"enter the brand";
				cin>>brand;
				cout<<"enter the country";
				cin>>country;
			}
			void printm()
			{
				cout<<"brand="<<brand;
				cout<<"country="<<country;
			}
	};
	class LCDtv:public product,manufacture
	{
		public:
			int inches,price;
			void getl()
			{
				getm();
				getp();
				cout<<"enter price,inches";
				cin>>price>>inches;
			}
				void printl()
				{
					printp();
					printm();
					cout<<"inches="<<inches;
					cout<<"price="<<price;
				}
	};
	int main()
	{
		LCDtv l;
		l.getl();
		l.printl();
		return 0;
	}
