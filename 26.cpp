//AIM: program to find Interest using default arguments
#include<iostream>
using namespace std;
void interest(float p=1000.0f,float t=2.5f,float r=2.0f);
void interest(float p, float t, float r)
{
	float i;
	i=(p*t*r)/100;
	cout<<"interest="<<i<<endl;
}
int main()
{
	float p,t,r;
	cout<<"enter p,t,r values";
	cin>>p>>t>>r;
	interest(p,t,r);
	interest();
	interest(p);
	return 0;
}
