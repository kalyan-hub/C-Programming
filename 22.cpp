//AIM: Write a program to understand the use of a constructor and destructor
#include<iostream>
using namespace std;
class sample
{
	public:
	    sample()
	        {
		        cout<<"Constructor is invoked"<<endl;
	        }
	    ~sample()
	        {
		        cout<<"Destructor is invoked"<<endl;
	        }
};
int main()
{
	sample s1;
	sample s2;
	sample s3;
	return 0;
}
