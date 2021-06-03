//AIM:Develop a C++ program to illuminate pure virtual function and calculate areas of different shapes using pure virtual function
#include<iostream>
using namespace std;
class shape
{
	public:
		int radius;
	public:
		void input()
		{
			cout<<"Enter radius"<<endl;
			cin>>radius;
        }
        virtual void area()=0;
};
class circle:public shape
{
	public:
		void area()
		{
			input();
			cout<<"Area of circle ="<<3.14*radius*radius<<endl;
		}
};
class sphere : public shape
{
	public:
		void area()
		{
			input();
			cout<<"Area of sphere ="<<4*3.14*radius*radius<<endl;
		}
};
int main()
{
	shape *ptr;
	circle c;
	ptr=&c;
	ptr->area();
	sphere s;
	ptr=&s;
	ptr->area();
	return 0;
}
