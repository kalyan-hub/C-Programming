//AIM:Program to implement pointer to class
#include<iostream>
using namespace std;
class sample
{
	private:
		int x;
		public:
		void show()
		{
			cout<<"Enter an integer value:"<<endl;
		    cin>>x;
		    cout<<"X="<<x;
		}
};
int main()
{
	sample s;
	sample *ptr;
	ptr=&s;
	ptr->show();
	return 0;
}
