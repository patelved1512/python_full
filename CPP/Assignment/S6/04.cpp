#include<iostream>
using namespace std;

class Userprofile
{
	private:
		string phonenumber;
	public:
		void setphonnumber(string number)
		{
			phonenumber=number;
		}
		string getphonenumber()
		{
			return phonenumber;
		}
};

int main()
{
	Userprofile u;
	u.setphonnumber("8980081997");
	cout<<"\nphone number : "<<u.getphonenumber();
	return 0;
}
