#include <iostream>
using namespace std;

class Orderdetails
{
	public:
    	int order_id;
    	string restaurantname;
    	bool isdelivered;
};

class Foodorder
{
	private:
    	int order_id;
    	string restaurantname;
    	bool isdelivered;
	public:
    Foodorder(Orderdetails details)
    {
        order_id=details.order_id;
        restaurantname=details.restaurantname;
        isdelivered=details.isdelivered;
    }

    void markdelivered()
    {
        isdelivered=true;
        cout<<"\nOrder " <<order_id<<" from "<<restaurantname << " has been delivered!" ;
    }
};

int main()
{
    Orderdetails details;

    details.order_id=101;
    details.restaurantname="Pizza Hut";
    details.isdelivered=false;
    Foodorder order(details);

    order.markdelivered();

    return 0;
}
