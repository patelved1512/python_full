#include<iostream>
using namespace std;


class Ticket
{
	public:
		Ticket()
		{
			cout<<"\n booked ! ";
		}
		
		~Ticket()
		{
			cout<<"\n saving your tickets....";
		}
};

int main()
{
	Ticket t;
	return 0;
}
