#include<stdio.h>
#include<conio.h>

void main()
{
	int song =3,guess;
	
	printf("guess the song ");
	printf("\n1. perfect");
	printf("\n2. believer");
	printf("\n3. shapeofyou");
	
	do
	{
		printf("\nEnter your guess :");
		scanf("%d",&guess);
		
		if(guess != song)
		{
			printf("\nwrong guess !! try again");
		}
		
	}
	while(guess != song);
		printf("congratulations !! correct song guessed");

	getch();
}
