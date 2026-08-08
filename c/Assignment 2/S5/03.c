#include<stdio.h>
#include<conio.h>
void main()
{
    float amount, discount = 0, finalAmount;

    printf("Enter total cart amount: ");
    scanf("%f", &amount);

    if (amount > 1000)
	{
        if (amount > 2000)
            discount = 20;
        else
            discount = 10;
    }

    finalAmount = amount - (amount * discount / 100);

    printf("Discount: %.0f%%\n", discount);
    printf("Final Amount to Pay: %.2f\n", finalAmount);

    getch();
}
