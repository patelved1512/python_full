#include<iostream>
#include<fstream>
using namespace std;

int main()
{
    ofstream file("my_fav_songs.txt", ios::app);

    string song;

    cout<<"\nEnter a new song name: ";
    getline(cin,song);

    file <<"\n"<<song;

    file.close();

    cout<<"Song added ";

    return 0;
}
