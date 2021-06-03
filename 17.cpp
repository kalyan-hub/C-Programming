#include<iostream>
using namespace std;
class sample
{
	private:int x,y;
	public:
		friend void print();
};
void print()
{
	sample s;
	s.x=45;
	s.y=90;
	cout<<"x value ="<<s.x<<endl;
	cout<<"y value ="<<s.y<<endl;
}
int main()
{
	print();
	return 0;
}
