#include<stdio.h>
#include<conio.h>

int even(int num)
{
	if(num%2==0)
	{
		return 1;
	}
	else
	{
		return 0;
	}
}
void main()
{
	int number;
	
	printf("Enter number:");
	scanf("%d",&number);
	
	if(even(number))
	{
		printf("\n%d :-is even number",number);
	}
	else
	{
		printf("\n%d :-is odd number",number);
	}
	
	getch();
}
