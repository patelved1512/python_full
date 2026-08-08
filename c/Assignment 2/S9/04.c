#include<stdio.h>
#include<conio.h>

void main()
{
	int a[3][2]={ {221,132},{123,138},{234,189} };
	 int i;
	 
	for(i=0;i<3;i++)
	{
	 	if(a[i][0]>a[i][1])
	 	{
	 		printf("\nmatch %d highest score :%d",i+1,a[i][0]);
	 	}
	 	else
	 	{
	 		printf("\nmatch %d highest score :%d",i+1,a[i][1]);
		 }
	}
	getch();
}
