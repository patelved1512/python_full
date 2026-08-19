#include<iostream>
using namespace std;

class Socialmedia
{
	public:
		void uploadcontent()
		{
			cout<<"\nUploaded content from socialmedia  ";
		}
};
class Youtuber : public  Socialmedia
{
	public:
		void uploadcontent()
		{
			cout<<"\nUploaded content from youtube  ";
		}
};
int main()
{
	Socialmedia s;
	Youtuber y;
	s.uploadcontent();
	y.uploadcontent();
	return 0;
}
