#include<stdio.h>
#include<conio.h>

struct Bio 
{
    char description[100];
    int age;
};

struct instaprofile 
{
    char username[50];
    int followers;
    struct Bio bio;
};

void main() 
{
    struct instaprofile profile = {"patel_ved_123",1500,{"student", 21}};

    printf("Username: %s\n", profile.username);
    printf("Followers: %d\n", profile.followers);
    printf("Bio: %s\n", profile.bio.description);
    printf("Age: %d\n", profile.bio.age);

    getch();
}
