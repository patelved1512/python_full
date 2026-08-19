#include<iostream>
using namespace std;

class Instastory
{
	protected:
		int view;
	public:
		void put()
		{
			cout<<"\nEnter a view : ";
			cin>>view;
		}
};
class Sponsoredstory: public Instastory
{
	public:
		void display()
		{
			cout<<"\nstory view : " <<view;
		}
};
int main()
{
	 Sponsoredstory s;
	 s.put();
	 s.display();
	 
	 return 0;
}
