#include<iostream>
using namespace std;

class java
{
	public :
		 void processpayment(float a)
		 {
		 	cout<<"\n Amount is : "<<a;
		 }
		 void processpayment(float a1,string coupuncode)
		 {
		 	float finalamount = a1;
		 	
		 	if(coupuncode=="save10")
		 	{
		 		finalamount=a1-(a1*0.10);
			}
			cout<<"\nFinal amount is : "<<finalamount;
		 }
};
int main()
{
	java p;
	p.processpayment(1000);
	p.processpayment(1000,"save10");
	return 0;
}
