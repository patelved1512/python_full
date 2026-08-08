#include<stdio.h>
#include<conio.h>

void main() 
{
    int minutes[7] = {0};
    int i, choice,total, highest;
    float average;
    char ch;
    FILE *v;

    while(1) 
	{
        printf("\n===== Music Listening Logger =====\n");
        printf("\n1.Log Music Listening Minutes");
        printf("\n2.View Weekly Summary");
        printf("\n3.Weekly Report");
        printf("\n4.Reset Data");
        printf("\n5.Exit");
        printf("\nEnter your choice: ");
        scanf("%d",&choice);

        switch(choice) 
		{
        	case 1:
            	v=fopen("song.txt","w");
				printf("\nEnter listening minutes for 7 days:\n");

            for(i=0;i<7;i++) 
			{
                printf("Day%d:",i+1);
                scanf("%d",&minutes[i]);
                fprintf(v,"%d\n", minutes[i]);
            }

            fclose(v);
            printf("\nData saved successfully.");
            break;

        	case 2:
            	printf("\nWeekly Summary:");

            for (i=0;i<7;i++) 
			{
                printf("\nDay%d:%d minutes",i+1,minutes[i]);
            }
            break;

        	case 3:
            	v=fopen("song.txt","r");

            if (v==NULL) 
			{
                printf("\nNo data found.");
                break;
            }

            total=0;
            highest=0;
            i=0;

            while(fscanf(v,"%d",&minutes[i])!= EOF) 
			{
                total=total+minutes[i];

                if(minutes[i]>highest)
                	highest=minutes[i];
					i++;
            }

            fclose(v);

            if(i>0) 
			{
                average=(float)total/i;

                printf("\nWeekly Report\n");
                printf("\nTotal Minutes: %d", total);
                printf("\nAverage Minutes:%.2f", average);
                printf("\nHighest Minutes:%d", highest);
            } 
			else 
			{
                printf("\nNo data available.");
            }

            break;

        case 4:
            printf("Are you sure you want to reset? (Y/N): ");
            scanf("%c",&ch);

            if(ch=='Y'||ch=='y') 
			{

                for(i=0;i<7;i++) 
				{
                    minutes[i]=0;
                }

                v=fopen("song.txt","w");
                fclose(v);

                printf("\nData Reset Successfully.");
            } 
			else 
			{
                printf("\nReset Cancelled.");
            }
            break;

        	case 5:
            	printf("\nThank You!");
            return 0;

        	default:
            	printf("\nInvalid Choice");
        }
    }

    getch();
}
