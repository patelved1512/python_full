#include <stdio.h>

void getUserInitials(char name[30])
{
    printf("Initials: %c%c\n", name[0], name[6]);
}
void main()
{
    char name[30] = "Virat Kohli";

    getUserInitials(name);

    getch();
}
