#include<iostream>
using namespace std;

class Musicplayer
{
	public:
    	void play()
    	{
        	cout<<"\nPlaying music";
    	}
};

class Spotifyplayer : public Musicplayer
{
	public:
    	void play()
    {
        cout<<"\nPlaying music on Spotify";
    }
};

int main()
{
    Spotifyplayer s;

    s.play();

    return 0;
}
