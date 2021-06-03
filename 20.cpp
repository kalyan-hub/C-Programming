//Program to find volume of a box using constructor overloading
#include<iostream>
using namespace std;
class box
{
	private:
		float length,breadth,height;
	public:
		box()
		{
			cout<<"Enter l,b,h :";
			cin>>length>>breadth>>height;
		}
		box(float l,float b,float h)
		{
			length=l;
			breadth=b;
			height=h;
		}
		box(float x)
		{
			length=breadth=height=x;
		}
		float volume()
		{
			cout<<"volume="<<(length*breadth*height)<<endl;
		}
};
int main()
{
	box B1;
	B1.volume();
	box B2(5.5f,3.2f,5);
	B2.volume();
	box B3(4.5f);
	B3.volume();
	return 0;
}
	
