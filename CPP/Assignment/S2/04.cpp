#include <iostream>
using namespace std;

class Playlist
{
	private:
    	string songs[10];
    	int i,count;

	public:
    	Playlist()
    	{
        	count = 0;
    	}
    void addsong(string songTitle)
    {
        songs[count]=songTitle;
        count++;
    }
    void displaysongs()
    {
        cout<<"\n-----My Playlist-----";

        for(i=0;i<count;i++)
        {
            cout<<"\n"<<songs[i];
        }
    }
};

int main()
{
    Playlist p;

    p.addsong("Perfect");
    p.addsong("Believer");
    p.addsong("Faded");

    p.displaysongs();

    return 0;
}
