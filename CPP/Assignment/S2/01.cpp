#include<iostream>
#include<string>
#include<ctime>
using namespace std;

class Playlist
{
	public:
		string name;
		string createdon;
		bool ispublic;
		
		
		Playlist(string n,string date,bool p)
		{
			name=n;
			createdon=date;
			ispublic=p;
		 } 
 };
 
 
int main()
{
	Playlist Playlist("long drive","2026-08-14",false);
	cout<<"name : "<<Playlist.name<<endl;
	cout<<"createdon : "<<Playlist.createdon<<endl;
	cout<<"ispublic : "<<(Playlist.ispublic?"true":"false")<<endl;
	
	return 0;
}
