#include<stdio.h>
#include<conio.h>

void swap(int *a,int *b)
{
	int temp;
	
	temp= *a;
	*a= *b;
	*b= temp;
}
void main()
{
	int playlist1=30;
	int playlist2=40;
	
	printf("====before swapping====");
	printf("\nplayliset1 song :%d",playlist1);
	printf("\nplayliset2 song :%d",playlist2);
	
	swap(&playlist1,&playlist2);
	
	printf("\n====after swapping====");
	printf("\nplayliset1 song :%d",playlist1);
	printf("\nplayliset2 song :%d",playlist2);

	getch();
}
