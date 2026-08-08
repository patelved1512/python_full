#include<stdio.h>
#include<conio.h>

int total_bill()
{
	int quantity;
	float total,price;
	
	printf("Enter price :");
	scanf("%f",&price);
	printf("\nEnter quantity: ");
	scanf("%d",&quantity);
	
	total = price * quantity ;
	
	return total;
}
void main()
{
	printf("Your total bill is :",total_bill());
	getch();
}
