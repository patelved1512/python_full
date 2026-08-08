#include <stdio.h>
#include<conio.h>

void increment(int *followers, int n) 
{
	int i;
    for(i=0;i<n;i++) 
	{
        *(followers+i) = *(followers+i)+100;
    }
}

void main() 
{
	int i;
    int followers[5] = {500,800,1200,900,700};

    increment(followers, 5);

    printf("Updated Followers:\n");

    for(i=0;i<5;i++)
	{
        printf("%d\n",followers[i]);
    }
	getch();
}
