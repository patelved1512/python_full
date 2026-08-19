#include <iostream>
#include <fstream>
using namespace std;

int main()
{
    ofstream file("wishlist.txt");

    string product;
    float price;
    int i;

    for(i=1;i<=3;i++)
    {
        cout<<"\nEnter product name: ";
        getline(cin, product);

        cout<<"\nEnter price: ";
        cin>>price;
        cin.ignore();

        file<<product<<" - Rs. "<<price;
    }

    file.close();
    ifstream readFile("wishlist.txt");

    cout<<"\nMy Wishlist:\n";

    string line;

    while(getline(readFile,line))
    {
        cout<<line;
    }

    readFile.close();

    return 0;
}
