#include <iostream>
#include <fstream>
using namespace std;

class Content {
private:
    string title;
    string platform;
    int views;
    string status;

public:

    void addContent() 
	{
        cout<<"\nEnter Content Title: ";
        cin>>title;

        cout<<"\nEnter Platform: ";
        cin>>platform;

        cout<<"\nEnter Views: ";
        cin>>views;

        cout<<"\nEnter Status: ";
        cin>>status;

        ofstream file("content_list.txt", ios::app);

        file<<"\nTitle: "<<title;
        file<<"\nPlatform: "<<platform;
        file<<"\nViews: "<<views;
        file<<"\nStatus: "<<status;
        file<<"\n------------------------";

        file.close();

        cout<<"\nContent Saved Successfully!";
    }

    void menu() 
	{
        int choice;

        do {
            cout << "\n===== CONTENT MENU =====";
            cout << "\n1. Add Content";
            cout << "\n2. Exit";
            cout << "\nEnter your choice: ";
            cin >> choice;

            if (choice == 1) 
			{
                addContent();
            }
            else if (choice == 2) 
			{
                cout<<"\nThank you";
            }
            else 
			{
                cout<<"\nInvalid Choice!";
            }

        } 
		while (choice != 2);
    }
};

int main() 
{

    Content c;

    c.menu();

    return 0;
}
