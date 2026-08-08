#include<stdio.h>
#include<conio.h>

void main()
{
	FILE *v;
	char song[30];
	
	
	v=fopen("playlist.txt","r");
	
	while(fgets(song,sizeof(song),v))
	{
		printf("%s",song);
	}
	fclose(v);
	
	getch();
}
