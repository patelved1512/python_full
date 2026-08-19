#include<iostream>
using namespace std ;

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
class Youtuber : public Socialmedia
{
	private:
		string name;
		string video;
	public:
		void put1()
		{
			cout<<"\nEnter youtube channel name : ";
			cin>>name;
			cout<<"\nEnter title of video : ";
			cin>>video;
		}
		void display1()
		{
			cout<<"\n Youtuber name is : "<<name;
			cout<<"\n title of video is : "<<video;
		}
};
class Gamingyoutuber : public Youtuber
{
	private:
		string name;
		string channel;
		
	public:	
		void put2()
		{
			cout<<"\nEnter your gaming channel name  : ";
			cin>>name;
			cout<<"\nEnter channel name  : ";
			cin>>channel;
		}
		void display2()
		{
			cout<<"\n Youtuber name is : "<<name;
			cout<<"\n channel name is : "<<channel;
		}
};

int main()
{
	Gamingyoutuber g;
	g.put();
	g.put1();
	g.put2();
	g.display();
	g.display1();
	g.display2();
	
	return 0;
}
