#include<stdio.h>
#include<conio.h>

float avg()
{
	int i,a[7]={100,456,254,667,435,158,908};
	int sum =0;
	float average;
	for(i=0;i<7;i++)
	{
		sum=sum+a[i];
	}
	average=sum/7;
	return average;
}
void main()
{
	printf("Avarage =%.2f",avg());
	getch();
}
