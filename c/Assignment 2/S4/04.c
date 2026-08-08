#include<stdio.h>
#include<conio.h>

void main()
{
	int like,comments,shares;
	printf("Enter likes :");
	scanf("%d",&like);
	
	printf("Enter comments :");
	scanf("%d",&comments);
	
	printf("Enter shares:");
	scanf("%d",&shares);
	
	if(like >= 1000 || (comments >= 200 && shares >= 50))
	{
		printf("trending");
	}
	else
	{
		printf("nottreanding");
	}
	getch();
}

