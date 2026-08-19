#include <iostream>
#include <fstream>
using namespace std;

class Content 
{
	public:
    	string title[10];
    	string platform[10];
    	string status[10];
    	int i,total;

    void readFile() 
	{
        ifstream file("content_list.txt");

        total=0;

        while(file>>title[total]>>platform[total]>>status[total]) 
		{
            total++;
        }

        file.close();
    }

    void display() 
	{
        for(i=0;i<total;i++) 
		{
            cout<<"\n"<<i+1<< ". "<<title[i]<<" "<<platform[i]<<" "<<status[i];
        }
    }

    void deleteContent() 
	{
        int number;

        cout<<"\nEnter content number to delete: ";
        cin>>number;

        if(number>=1&&number<=total) 
		{
            for(i=number-1;i<total-1;i++) 
			{
                title[i]=title[i + 1];
                platform[i]=platform[i + 1];
                status[i]=status[i + 1];
            }
            total--;

            ofstream file("content_list.txt");

            for(i=0;i<total;i++) 
			{
                file <<"\n"<< title[i]<<" "<<platform[i]<<" "<<status[i];
            }

            file.close();

            cout<<"\nContent deleted!";

            cout<<"\nUpdated List:";
            display();
        }
        else 
		{
            cout<<"\nInvalid number!";
        }
    }
};

int main() 
{

    Content c;

    c.readFile();

    cout<<"\nContent List:\n";
    c.display();

    c.deleteContent();

    return 0;
}
