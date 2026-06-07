#include "../headers/menuhandler.h"
#include <vector>

void menuhandler::buildhero1()
{
    char ch;
    int counter=0;
    cout<< R"(User 2 :
    choose your heroes
------------------------
1 :  dr.white    
2 :  little taha
3 :  dani golang
4 :  amin
5 :  big taha
------------------------
)";

cout<<"input :  ";
while (counter<3)
{

cin>>ch;

int a;
a=ch - '0';
if (a<1||a>5)
{
    cout<<"please enter a valid number (1 - 5) \n";
}
else{
    counter++;
    user1.buildheroes(a);
}

}

}

void menuhandler::buildhero2()
{
    char ch;
    int counter=0;
    cout<< R"(User 2:
    choose your heroes
------------------------
1 :  dr.white    
2 :  little taha
3 :  dani golang
4 :  amin
5 :  big taha
------------------------
)";

cout<<"input :  ";
while (counter<3)
{
cin>>ch;
int a;
a=ch - '0';
if (a<1||a>5)
{
    cout<<"please enter a valid number (1 - 5) \n";
}
else{
    counter++;
    user2.buildheroes(a);
}

}

}

void menuhandler::builduser1()
{
    cout<<"enter name (You are user 1) : \n";
    string name;
    cin>>name;
    user1.set_name(name);
}
void menuhandler::builduser2()
{
    cout<<"enter name (You are user 2) : \n";
    string name;
    cin>>name;
    user2.set_name(name);
}

void menuhandler::runall()
{
    builduser1();
    buildhero1();
    builduser2();
    buildhero2();
}