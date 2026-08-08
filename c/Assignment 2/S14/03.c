#include<stdio.h>
#include<conio.h>

void Count(int count)
{
	if(count>=1000000)
	{
		printf("\n%.1fm\n",count/1000000.0);
	}
	else if(count>=1000)
	{
		printf("\n%.1fk\n",count/1000.0);
	}
	else
	{
		printf("\n%d\n",count);
	}
}
void main()
{
	Count(1200);
	Count(1500000);
	Count(400);
	getch();
}
