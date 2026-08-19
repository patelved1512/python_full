#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream file("my_fav_songs.txt");
	
	file<<"\n Perfect";
	file<<"\nBeliever";
	file<<"\nShape of You";
	file<<"\nFaded";
	file<<"\nCounting Stars";
	
	file.close();
	
	cout<<"\nsongs saved ";
	return 0;
}
