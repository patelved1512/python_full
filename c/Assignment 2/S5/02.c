#include<stdio.h>
#include<conio.h>

void main()
{
    int a;

    printf("Choose Meal Time:\n");
    printf("1. Breakfast\n2. Lunch\n3. Snack\n4. dinner\n");
    scanf("%d", &a);

    switch(a)
	{
        case 1:
            printf("Suggested Dish: Idli\n");
            break;
        case 2:
            printf("Suggested Dish: dal-rise\n");
            break;
        case 3:
            printf("Suggested Dish: Sandwich\n");
            break;
        case 4:
            printf("Suggested Dish: Paneer Butter Masala\n");
            break;
        default:
            printf("Try some fruits!\n");
    }

    getch();
}
