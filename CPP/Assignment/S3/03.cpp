#include<iostream>
#include<string>
using namespace std;

class Movie
{
	private:
		string title;
		string genre;
		float rating;
	public:
		Movie(string t,string g,float r)
		{
			title=t;
			type=t;
			rating=r;
		}
		Movie(Movie &m)
		{
			title=m.title;
			type=m.type;
			rating=m.rating;
		}
		void display()
		{
			cout<<"\nTitle : "<<title;
			cout<<"\nMovietype : "<<type;
			cout<<"\nrating : "<<rating;
		}
};

int main()
{

	
	Movie m2("Inception", "Science Fiction", 8.8);
	m2.display();
	
	Movie m3(m2);
	m3.display();
	
	return 0;
	
}
