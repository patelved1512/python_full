#include <iostream>
#include <fstream>
using namespace std;

class Content 
{
	public:
    	string title[10];
    	string platform[10];
    	string status[10];
    	int i,total = 0;

    void readFile() 
	{
        ifstream file("content_list.txt");

        while(total<10&&file>>title[total]>>platform[total]>>status[total]) 
		{
            total++;
        }

        file.close();
    }

    void display() 
	{
        for(i=0;i<total;i++) 
		{
            cout<<"\n"<<i+1<<". "<<title[i]<<" "<<platform[i]<<" "<<status[i];
        }
    }

    void updateStatus() 
	{
        int choice;
        string newStatus;

        cout<<"\nEnter content number: ";
        cin>>choice;

        if(choice>=1&&choice<=total) 
		{
		    cout<<"\nEnter new status: ";
            cin>>newStatus;

            status[choice-1]=newStatus;

            ofstream file("content_list.txt");

            for (i=0;i<total;i++) 
			{
                file<<"\n"<< title[i] << " "<< platform[i] << " "<< status[i];
            }

            file.close();

            cout<<"\nStatus updated successfully!";
        }
        else 
		{
            cout<<"\nInvalid content number!";
        }
    }
};

int main() 
{

    Content c;

    c.readFile();

    cout<<"\nContent List:";
    c.display();

    c.updateStatus();

    return 0;
}
