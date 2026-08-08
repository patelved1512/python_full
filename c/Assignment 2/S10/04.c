#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	char name[30],username[30];
	
	printf("Enter your name :");
	scanf("%s",&name);
	
	printf("\nEnter your username :");
	scanf("%s",&username);
	
	if(strlen(name)<10)
	{
		strcpy(username,name);
	}
	else
	{
		strncpy(username,name,10);
		username[10]='\0';
	}
	printf("\ncreated username :%s",username);
	getch();
}
