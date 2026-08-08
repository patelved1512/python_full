#include<stdio.h>
#include<conio.h>
#include<string.h>

void  main()
{
    char team[50];

    printf("Enter your favorite IPL team: ");
    scanf("%s", team);

    if (strcmp(team, "mi") == 0)
    {
        printf("Go Mumbai Indians!\n");
	}
    else if (strcmp(team, "csk") == 0)
    {
        printf("Chennai Super Kings for the win!\n");
    }
    else if (strcmp(team, "rcb") == 0)
    {
        printf("Ee Sala Cup Namde!\n");
    }
    else if (strcmp(team, "rr") == 0)
    {
        printf("Halla boll!\n");
    }
    else if (strcmp(team, "srh") == 0)
    {
        printf("Go Sunrisers Hyderabad!\n");
    }
    else
    {
        printf("Team not found!\n");
	}

    getch();
}
