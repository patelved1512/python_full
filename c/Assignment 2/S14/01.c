#include<stdio.h>
#include<conio.h>

void main()
{
	char item[3][30]={"burger","pizzq","fries"};
	int price[3]={120,250,90};
	int i,total=0;
	
	for(i=0;i<3;i++)
	{
		total=total+price[i];
	}
	printf("total:%d",total);
	getch();
}
