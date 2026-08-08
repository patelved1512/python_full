#include<stdio.h>
#include<conio.h>
#include<string.h>

void main()
{
	FILE *v;
	char song[30],tamp[30];
	int i;
	
	v=fopen("playlist.txt","r");
	
	while(fgets(song,sizeof(song),v))
	{
		strcpy(tamp, song);

		for(i=0;song[i]!='\0';i++)
		{
			if (tamp[i]>='A'&&tamp[i]<='Z') 
			{
                tamp[i]=tamp[i]+32;		
			}
		}
		if(strstr(tamp,"love")!=NULL)
		{
			printf("%s",song);	
		}
	}
	getch();
}
