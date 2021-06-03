#include<iostream>
using namespace std;
class box
{
	float l;
	float b;
	float h;
	public:
	void volume();	
};
void box::volume()
{
	cout<<"Enter the lenght,breadth,height of the box:";
	cin>>l>>b>>h;
	float volume=l*b*h;
	cout<<"volume="<<volume;
}
int main()
{
	box b;
	b.volume();
	return 0;
}
