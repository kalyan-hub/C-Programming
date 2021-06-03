#include<iostream>
using namespace std;
int main()
{
	char A[20];
	int n,i,a,b,c,d,count1,count2;
	cout<<"Enter the lenght of a string:";
	cin>>n;
	cout<<"Enter string elements:";
	for(i=0;i<n;i++)
	{
		cin>>A[i];
	} 
	cout<<"String elements are:";
	for(i=0;i<n;i++)
	{
		puts(A);
	} 		
	cout<<"position of the doubtful areas are:";
	cin>>b>>c>>d;
	cout<<"the results are :";
	for(i=0;i<n;i++)
	{
		if(A[i]==A[b])
		count1++;
	}
    for(i=0;i<n;i++)
	{
		if(A[i]==A[c])
		count2++;
	}
	cout<<count1<<endl<<count2;
	return 0;
}
