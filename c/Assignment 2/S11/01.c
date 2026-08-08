#include<stdio.h>
#include<conio.h>


void main()
{
	int like=100;
	int *ptrlike;
	
	ptrlike= &like;
	
	printf("like :%d",like);
	printf("\nptrlike :%d",*ptrlike);
	printf("\nadd stored in ptrlike :%p",ptrlike);
	
	getch();
}
