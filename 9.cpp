#include<iostream>
using namespace std;
class box
{
	float length;
	float breadth;
	float height;
	public:
	void volume(float length,float breadth,float height);	
};
void box::volume(float l,float b,float h)
{
	length=l;
	breadth=b;
	height=h;
	float volume=length*breadth*height;
	cout<<"volume="<<volume<<endl;
}
int main()
{
	box b1,b2;
	b1.volume(5.6,3.25,5.5);
	b2.volume(5.0,3.0,8.0);

	return 0;
}
