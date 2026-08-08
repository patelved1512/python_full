#include<stdio.h>
#include<conio.h>


void main()
{
	FILE *v;
	
	v=fopen("playlist.txt","w");
	
	fprintf(v,"song1");
	fprintf(v,"\nsong2");
	fprintf(v,"\nsong3");
	
	fclose(v);
	
	printf("song added into playlist ");
		
	getch();
}
