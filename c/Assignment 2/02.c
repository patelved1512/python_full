#include<stdio.h>
#include<conio.h>


void main()
{
	
	int i,playlist[3][5]=
	{
		{1,2,3,4,5},{5,4,3,2,1},{2,5,3,4,1}		
	};
	printf("\nrating of second array :");
	
	for(i=0;i<5;i++)
	{
		printf("\nday %d:%d ",i+1,playlist[1][i]);
	}
	getch();
}
