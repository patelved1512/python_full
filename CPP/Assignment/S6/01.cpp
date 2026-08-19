#include<iostream>
using namespace std;

class Song
{
	private:
		string title;
		string artist;
	public:
		void settitle(string t)
		{
			title=t;
		}
		void setartist(string a)
		{
			artist=a;
		}
		string gettitle()
		{
			return title;
		}
		string getartist()
		{
			return artist;
		}
	
};

int main()
{
	Song s;
	s.settitle("Perfect");
	s.setartist("Ed Sheeran");
	cout<<"\nTitle:"<<s.gettitle();
    cout<<"\nArtist:"<<s.getartist();
	s.settitle("Shape of You");
	cout<<"\n-----Updated title-----";
    cout<<"\n Title: " <<s.gettitle() ;

	return 0;
}
