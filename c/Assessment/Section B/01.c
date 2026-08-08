#include<stdio.h>
#include<conio.h>

void  main() 
{
    float per;

    
    printf("\nEnter the student's percentage: ");
    scanf("%f", &per);


    if(per<0||per>100) 
	{
        printf("\nError: Invalid percentage! Please enter a value between 0 and 100.");
        return 1; 
    }

    if(per>=90) 
	{
        printf("\nGrade: A");
        printf("\nExcellent! Keep up the outstanding work");
    }
    else if(per>=75) 
	{
        printf("\nGrade: B");
        printf("\nGood work! Keep pushing.");
    }
    else if(per>=60) 
	{
        printf("\nGrade: C");
        printf("\nNice effort! Keep improving.");
    }
    else if(per>=45)
	{
        printf("\nGrade: D");
        printf("\nYou passed. Stay focused and work harder");
    }
    else 
	{
        printf("\nGrade: F");
        printf("\nDon't give up. Learn from your mistakes and try again.");
    }

    getch();
}     



