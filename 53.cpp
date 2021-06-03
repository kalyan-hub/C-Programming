//guessing word
#include<iostream>
using namespace std;
class word
{
	public:
		void guess()
		{
			int i=0,attempts=1,flag=0;
			char ch;
			char str[20]="science";
			char strl[20];
			for(int i=0;str[i]='\0';i++)
			{
				strl[i]='*';
			}
			cout<<strl;
		    while(attempts<=4)
			{
			  cout<<"Enter your character";
			  cin>>ch;
			  for(int i=0;str[i]!='\0';i++)
			  {
			  	if(ch==str[i])
			  	{
			  	    strl[i]=ch;
					cout<<strl<<"\n";
					flag=1;	
				}
			  }	
			  if(flag==0)
			  {
			  	cout<<"\n sorry!the character is not existing"<<endl;
			  	attempts++;
			  }
			  //cout<<"you still have"<<attempts<<"chances"<<endl;
			}	
			if(attempts==4)
			cout<<"sorry";
			else
			cout<<strl;
		}
};
int main()
{
	word w;
	w.guess();
	return 0;
}
