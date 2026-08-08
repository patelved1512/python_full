#include<stdio.h>
#include<conio.h>

void main()
{
	int i,step[7]={4500,5600,5678,6809,7854,3476,7940};
	
	for(i=0;i<7;i++)
	{
		printf("\n day %d:%dstep",i+1,step[i]);
	}
	
	getch();
}
