#include<stdio.h>
#include<conio.h>

void main()
{
	int followercount=1;
	
	printf("Orignal value :%d",followercount);
	
	printf("\nPost-Increment: %d\n", followercount++);
    printf("After Post-Increment: %d\n", followercount);

    printf("Pre-Increment: %d\n", ++followercount);
    printf("After Pre-Increment: %d\n", followercount);
	getch();
}
