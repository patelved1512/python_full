#include <iostream>
#include <fstream>
#include <string>
using namespace std;

class Content 
{
	public:
    	void displaycontent() 
		{
        ifstream file("content_list.txt");

        string line;
        int count=1;

        while (getline(file, line) && count <= 2) 
		{
            cout<<"\n"<<count<<". "<<line;
            count++;
        }

        file.close();
    }
};

int main() 
{
    Content c;
    c.displaycontent();

    return 0;
}
