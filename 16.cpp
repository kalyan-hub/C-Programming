#include<iostream>
#include<cmath>
using namespace std;
class calculate
{
public:
	void power(int a,int b)
	{
		cout<<"Power of two ints="<<pow(a,b)<<endl;
	}
	void power(float a,float b)
	{
		cout<<"Power of two floats="<<pow(a,b)<<endl;
	}
	void power(double a,double b)
	{
		cout<<"Power of two doubles="<<pow(a,b)<<endl;
	}
	void power(int a,float b)
	{
		cout<<"Power of int and float="<<pow(a,b)<<endl;
    }  
};
int main()
{
	calculate C;
	C.power(10,2);
	C.power(3.5f,2.5f);
	C.power(3.281,3.26);
	C.power(5,2.5f);
	return 0;
}






