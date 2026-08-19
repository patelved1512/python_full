#include<iostream>
#include<string.h>
using namespace std;


class Playlist
{
	private:
		string name;
		string  createdon;
		bool ispublic;
	public:
		void get()
		{
			cout<<"\nEnter a name:";
			cin>>name;
			cout<<"\nEnter a date: ";
			cin>>createdon;
			cout<"\nEnter a (1 true/0 false)";
			cin>>ispublic; 
		}
		void togglePublic()
		{
			ispublic=!ispublic;
		}
		void display()
		{
			cout<<"\nname : "<<name<<endl;
			cout<<"\ncreatedon : "<<createdon<<endl;
			if(ispublic==true)
			{
				cout<<"ispublic yes"<<true<<endl;
			}
			else
			{
				cout<<"ispublic no "<<false<<endl;
			}
		}
};

int main()
{
	Playlist p;
	p.get();
	p.togglePublic();
	p.display();
	
	return 0;
}
