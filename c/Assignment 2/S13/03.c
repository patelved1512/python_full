#include<stdio.h>
#include<conio.h>


void main()
{
	FILE *v;
	
	v=fopen("playlist.txt","a");
	
	fprintf(v, "song 4");
    fprintf(v, "\nsong 5");
    
    fclose(v);
    
    printf("song added into playlist ");
    getch();
}
