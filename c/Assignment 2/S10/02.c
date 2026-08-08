#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char user[30],user1[30];
	
	printf("\nEnter 1st user name :");
	scanf("%s",&user);
	
	printf("\nEnter 2nd user name :");
	scanf("%s",&user1);
	
	if(strcmp(user,user1)==0)
	{
		printf("\nuser name is same ");
	}
	else
	{
		printf("\nuser name is diffrent ");
	}
	
	getch();
}

