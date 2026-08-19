#include<iostream>
using namespace std;

class Task
{
	private:
		 string title;
		 bool isdone;
	public:
		
		Task(string t)
		{
			title=t;
			isdone=false;
		}
		void markdone()
		{
			isdone=true;
		}
		void display()
		{
			if(isdone)
			{
				cout<<title<<"-done"<<endl;
			}
			else
			{			
				cout<<title<<"-pending"<<endl;
			}
		}
};
int main()
{
	Task ob1("jay");
	ob1.display();
	ob1.markdone();
	ob1.display();
	
	return 0;
}
