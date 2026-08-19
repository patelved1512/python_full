#include <iostream>
#include <string>
using namespace std;

class Playlist 
{
private:
    string playlistName;

public:
    
    Playlist() 
	{
        playlistName = "long drive";
        cout << "Welcome to your playlist: " << playlistName << endl;
    }
};

int main() 
{
    Playlist p;  

    return 0;
}
