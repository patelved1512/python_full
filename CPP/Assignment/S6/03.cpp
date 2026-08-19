#include<iostream>
using namespace std;

class Product
{
	public:
		virtual void upload()=0;
};
class Electronic : public Product
{
	public:
		void upload()
		{
			cout<<"\nElrctonic product uploaded ";
		}
};
class Clothing : public Product
{
	public:
		void upload()
		{
			cout<<"\nClothing product uploaded ";
		}
};

int main()
{
	Electronic e;
	e.upload();
	Clothing c;
	c.upload();
	return 0;
}
