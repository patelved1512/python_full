#include<stdio.h>
#include<conio.h>

void main()
{
	int i;
	int order[5]= {363,677,785,654,897};
	int *ptr =order;
	
	for(i=0;i<5;i++)
	{
		printf("order amount :%d",*ptr);
		printf("\naddress :%p\n\n",ptr);
		
		ptr++;
	}
	getch();
}
