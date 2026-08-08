#include<stdio.h>
#include<conio.h>

int age,amount;
int check()
{
	if(age>=18 && amount>=500)
		return 1;
	else 
		return 0;
}



void main()
{
	printf("Enter your age :");
	scanf("%d",&age);
	printf("Enter amount :");
	scanf("%d",&amount);
	if(check())
	{
		printf("Eligible for offer");
	}
	else
	{
		printf("not eligible for offer");
	}
	getch();
}
