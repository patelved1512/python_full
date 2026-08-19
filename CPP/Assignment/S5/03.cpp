#include<iostream>
using namespace std;

class Flipkartsearch
{
	public:
		void productsearch(string name)
		{
			cout<<"\nSearching product : "<<name;
		}
		void productsearch(string name,string category)
		{
			cout<<"\nSearching product : "<<name<<"  in category of : "<<category;
		}
};

int main()
{
	Flipkartsearch f;
	f.productsearch("sirt");
	f.productsearch("pant","cloths");	
	return 0;
}
