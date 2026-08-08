#include<stdio.h>
#include<conio.h>

struct playlist
{
	char title[30];
	char artist[30];
	int duration;
};
void main()
{
	struct playlist song={"tum hi ho","arijit singh",270};
	
	printf("song title :%s",song.title);
	printf("\nartist :%s",song.artist);
	printf("\nduration:%d",song.duration);
	
	getch();
}
