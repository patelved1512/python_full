#include<stdio.h>
#include<conio.h>


void main()
{
    int i,k,j;

    for(i=1;i<=6;i++)
    {
        for(k=6;k>=i;k--)
        {
            printf(" ");
        }

        for(j=1;j<=(2*i-1);j++)
        {
            printf("*");
        }
        printf("\n");
    }
    getch();
}
