#include<stdio.h>
#include<conio.h>

void by_value(int f)
{
	f=f+1000;
	printf("\ninside value fuction :%d",f);
}


void by_reference(int *f)
{
	*f = *f+1000;
	printf("\ninside reference fuction :%d",f);
}



void  main()
{
	int f=5000;
	
	printf("\norignal followers:%d",f);
	
	by_value(f);
	printf("\nafter pass by value :%d",f);
	
	by_reference(&f);
	printf("\nafter pass by reference :%d",f);
	
	getch();
}
