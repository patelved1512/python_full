#include<stdio.h>
#include<conio.h>

void main()
{
	const float gst=18.00;
	float price=400.00;
	float gstamount,finalprice;
	
	gstamount=(price*gst)/100;
	finalprice=gstamount+price;
	
	printf("price:%.2f",price);
	printf("\nprice with gst :%.2f",finalprice);
	getch();
}
