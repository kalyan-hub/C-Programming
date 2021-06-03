#include<iostream>
using namespace std;
class rectangle
{
	float length;
	float breadth;
	public:
	void area(float length,float breadth);	
};
void rectangle::area(float l,float b)

{
	length=l;
	breadth=b;
	float area=length*breadth;
	cout<<"area="<<area<<endl;
}
int main()
{
	rectangle R1,R2;
	R1.area(7.23,6.71);
	R2.area(25.0,26.0);
	return 0;
}
