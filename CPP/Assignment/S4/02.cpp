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
class Youtuber : public Socialmedia
{
	private:
		string name;
		string video;
	public:
		void put1()
		{
			cout<<"\nEnter name : ";
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
int main()
{
	Youtuber y;
	y.put();
	y.display();
	y.put1();
	y.display1();
	
	return 0;
}
