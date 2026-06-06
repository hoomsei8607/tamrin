#include "../headers/menuhandler.h"

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
int test[3];
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
switch (a)
{
case 1:
{
    if (counter==0)
    {
        white hero1;
    }
    else if (counter ==1)
    {
        white hero2; 
    }
    else if (counter ==2)
    {
        white hero3;
    }
    counter++;
    break;
}
case 2:
{
    if (counter==0)
    {
        liltaha hero1;
    }
    else if (counter ==1)
    {
        liltaha hero2; 
    }
    else if (counter ==2)
    {
        liltaha hero3;
    }
    counter++;
    break;
}
case 3:
{
    if (counter==0)
    {
        dani hero1;
    }
    else if (counter ==1)
    {
        dani hero2; 
    }
    else if (counter ==2)
    {
        dani hero3;
    }
   counter++;
    break;
}

case 4:
{
    if (counter==0)
    {
        amin hero1;
    }
    else if (counter ==1)
    {
        amin hero2; 
    }
    else if (counter ==2)
    {
        amin hero3;
    }
   counter++;
    break;
}
case 5:
{
    if (counter==0)
    {
        bigtaha hero1;
    }
    else if (counter ==1)
    {
        bigtaha hero2; 
    }
    else if (counter ==2)
    {
        bigtaha hero3;
    }
   counter++;
    break;
}

}
}
}
}