#include<stdio.h>
#include<conio.h>

void upper(char str[20])
{
	str[0] = toupper(str[0]);
}

void main()
{
	char product[20]="leptop",username[20]="ved";
	
	
	upper(product);
	upper(username);
	
	printf("\nproduct name is :%s",product);
	printf("\nuser name is :%s",username);
	
	getch();
	
}
