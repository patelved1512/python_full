#include <iostream>
#include <string>
using namespace std;

class Product 
{
private:
    string productName;
    double price;
    double rating;

public:
    Product(string name, double p, double r) 
	{
        productName = name;
        price = p;
        rating = r;
    }
    void displayInfo() 
	{
        cout << "Product Name: " << productName << endl;
        cout << "Price: " << price << endl;
        cout << "Rating: " << rating << "/5" << endl;
    }
};
int main() 
{
    Product p1("Samsung Galaxy M14", 12999, 4.3);
    p1.displayInfo();

    return 0;
}
