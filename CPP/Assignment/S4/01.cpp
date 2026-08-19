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
int main()
{
	Socialmedia s;
	s.put();
	s.display();
	return 0;
}
