#include<stdio.h>
#include<conio.h>

float price,discount;
int member;

int final_amount()
{
	float final_price;
	
	final_price = price - (price * discount /100);
	
	if(member ==1)
	{
		final_price = final_price - (final_price * 5 /100);	
	} 
	
	
	return final_price;
}


void main()
{
	printf("Eneter price :");
	scanf("%f",&price);
	printf("Enter discount:");
	scanf("%f",&discount);
	printf("if you are member so Enter 1 otherwise 0 :");
	scanf("%d",&member);
	
	printf("product final price = %d",final_amount());
	getch();
}

