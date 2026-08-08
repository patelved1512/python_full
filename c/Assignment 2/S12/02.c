#include<stdio.h>
#include<conio.h>

struct FoodItem 
{
    char itemName[50];
    float price;
    float rating;
};

void main()
{
	int i;
    struct FoodItem menu[3] = 
	{
        {"sendwich", 159.0, 4.4},
        {"maggie", 79.0, 4.2},
        {"samosa", 49.0, 4.6}
    };

    for (i =0;i<3;i++)
	{
        printf("Item: %s", menu[i].itemName);
        printf("\nPrice: %.2f", menu[i].price);
        printf("\nRating: %.1f\n\n", menu[i].rating);
    }

    getch();
}
