#include<iostream>
#include<string>
using namespace std;

int main()
{
	string a[5];
	int i;
	
	for(i=0;i<5;i++)
	{
		cout<<"enter string :";
		cin>>a[i];
	}
	for(i=4;i>=0;i--)
	{
		cout<<"a["<<i<<"]:"<<a[i]<<endl;
	}
	return 0;
}

