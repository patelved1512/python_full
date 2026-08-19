#include<iostream>
#include<string>
using namespace std;

string a[5];


void markdone(int num)
{
	a[num]=a[num]+"-done";
}
int main()
{
	
	int i,n;
	
	for(i=0;i<5;i++)
	{
		cout<<"enter string :";
		cin>>a[i];
	}
	
	cout<<"\nEnter number you want to done:";
	cin>>n;
	
	markdone(n-1);
	
	cout<<"\n-----updated list-----\n ";
	for(i=0;i<5;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}
