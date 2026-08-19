#include<iostream>
using namespace std;

class Socialmedia
{
	private:
		string name;
		int follower;
	public:
		void put()
		{
			cout<<"\nEnter user name : ";
			cin>>name;
			cout<<"\n Enter followers : ";
			cin>>follower;
		}
		void display()
		{
			cout<<"\nuser name : "<<name;
			cout<<"\n followers : "<<follower;
		}
};
class Podcaster : public Socialmedia
{
	private :
		string name;
	public:
		void put1()
		{
			cout<<"\nEnter podcast name : ";
			cin>>name;
		}
		void display1(string title )
		{
			cout<<"\nEpisode  "<<title<<"    publised on " <<name; 
		}
};

int main()
{
	Podcaster p;
	
	p.put();
	p.put1();
	p.display();
	p.display1("Future of AI");
	return 0;
}
