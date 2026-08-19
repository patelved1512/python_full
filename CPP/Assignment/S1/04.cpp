#include<iostream>
#include<string>
using namespace std;

class Task
{
	public :
		string name;
		bool done ;
		
		Task(string n)
		{
			name =n;
			done=false;
		}
		void markdone()
		{
			done=true;
		}
		void display()
		{
			cout<<name<<"-"<<(done ? "done":"pending")<<endl;
		}
};
class Tasklist
{
	Task* tasks[10];
	int i,count=0;
	
	public:
		void addtask(string name)
		{
			tasks[count]=new Task(name);
			count++;
		}
		void marktaskdone(int n)
		{
			tasks[n]->markdone();
		}
		void showtasks()
		{
			for(i=0;i<count;i++)
			{
				cout<<i+1<<". ";
				tasks[i]->display();
			}
		}
};

int main()
{
	int n;
	Tasklist t;
	t.addtask("c");
	t.addtask("cpp");
	t.addtask("html");
	
	cout<<"\nEnter task number to done : ";
	cin>>n;
	
	t.marktaskdone(n-1);
	t.showtasks();
	return 0;
}
