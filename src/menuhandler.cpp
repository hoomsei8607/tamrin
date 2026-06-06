#include "../headers/menuhandler.h"
#include <vector>

void menuhandler::run()
{
    char ch;
    int counter=0;
    cout<< R"(choose a hero
------------------------
1 :  dr.white    
2 :  little taha
3 :  dani golang
4 :  amin
5 :  big taha
------------------------
)";
std::vector<heroes*> selectedHeroes;
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
user1.selectedHeroes[0]->testmessage();
}

void menuhandler::builduser()
{
    cout<<"enter name";
    string name;
    cin>>name;
    user1.set_name(name);
}