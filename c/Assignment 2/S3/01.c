#include<stdio.h>
#include<conio.h>

void main()
{
	
	char name[30]="leptop";// product: productName (as a string)
	int quantity=3;//product: productquantity (as a intiger)
	float price=899.99;//product: productprice (as a float)
	double rating=4.5;//product: productrating (as a double)
	
	printf("\nproduct name :%s",name);
	printf("\nproduct  quantity:%d",quantity);
	printf("\nproduct price :%.2f",price);
	printf("\nproduct rating :%.2f",rating);
	getch();
	
}
