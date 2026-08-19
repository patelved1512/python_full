#include<iostream>
using namespace std;

class Foodorder
{
	private:
		int order_id;
		string restaurantname;
		bool isdelivered;
	public:
		void get()
		{
			cout<<"\nEnter restaurantname : ";
			cin>>restaurantname;
			cout<<"\nEnter order id :";
			cin>>order_id;
			isdelivered=true;
		}
		void markdelivered()
		{
			isdelivered==true;
			cout<<"\norder is delivered ";
		}
		void display()
		{
			cout<<"\nRestaurantname : "<<restaurantname;
			cout<<"\nOrder id : "<<order_id;
			cout<<"\nstatus : "<<isdelivered;
		}
};

int main()
{
	Foodorder f;
	f.get();
	f.markdelivered();
	f.display();
	return 0;
}
