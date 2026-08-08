#include<stdio.h>
#include<conio.h>

struct time 
{
    int hours;
    int minutes;
};

struct movieshow 
{
    char movie[50];
    int screen;
    struct time Time;
};

void  main() 
{
    struct movieshow show = {"Pushpa 2", 3, {7, 30}};

    printf("Movie: %s\n", show.movie);
    printf("Screen: %d\n", show.screen);
    printf("Time: %02d:%02d\n", show.Time.hours, show.Time.minutes);

    getch();
}
