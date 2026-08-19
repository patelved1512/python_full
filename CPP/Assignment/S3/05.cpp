#include<iostream>
using namespace std;

class Playlist
{
	string name;
	public:
		Playlist(string n)
		{
			name =n;
		}
		~Playlist()
		{
			FILE *file=fopen("autosave.txt","w");
			
			fprintf(file,"%s",name.c_str());
			
			fclose(file);
			
			cout<<"\nplaylist saved";
		}
};

int main()
{
	Playlist p("long drive" );
	return 0;
}
