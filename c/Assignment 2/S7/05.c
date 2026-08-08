#include<stdio.h>
#include<conio.h>

void main()
{
    int  i,j,k,n;

    printf("Enter number of rows: ");
    scanf("%d", &n);

    for(i=1;i<=n;i++)
    {
        for(k=n;k>=i;k--)
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
