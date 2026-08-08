#include<stdio.h>
#include<conio.h>
#include<string.h>
int i;
void add_to_cart(char cart[20][80],int *totalitems,char product_name[30] )
{
	strcpy(cart[*totalitems],product_name);
	(*totalitems)++;
	
	for(i=0;i<*totalitems;i++)
	{
		printf("\n%s",cart[i]);
	}
}
void main()
{
	char cart[20][80] = {"sirt","pant"};
	int cartsize=2;
	
	printf("\nOrignal cart:");
	for(i=0;i<cartsize;i++)
	{
		printf("\n%d.%s",i+1,cart[i]);
	}
	add_to_cart(cart,&cartsize,"t-sirt");
	
	prinf("\ncart after fuction call: ");
	for(i=0;i<cartsize;i++)
	{
		printf("\n%d.%s",i + 1,cart[i]);
	}
	getch();
}
