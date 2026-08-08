#include <stdio.h>
#include <string.h>

void main() 
{
    int choice = 0;
    char newTeam[30];

    while(choice <= 3) 
	{
        printf("\n--- IPL MENU ---");
        printf("\n1. View Teams");
        printf("\n2. Add New Team");
        printf("\n3. Exit");
        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        if(choice == 1) 
		{
            printf("\n1. CSK");
            printf("\n2. MI");
            printf("\n3. RCB");
        }
        else if(choice == 2) 
		{
            printf("\nEnter new team name: ");
            scanf("%s", newTeam);
            printf("\nname added successfully", newTeam);
        }
        else if(choice == 3) 
		{
            printf("\nThank You");
        }
        else 
		{
            printf("\nInvalid Choice");
        }
    }

    getch();
}
