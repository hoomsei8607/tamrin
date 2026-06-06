#include "../headers/menuhandler.h"

void menuhandler::run()
{
    char ch;
    cout<< R"(choose a hero
------------------------
1 :  dr.white    
2 :  little taha
3 :  dani golang
4 :  amin
5 :  big taha
------------------------
)";
cin>>ch;
int a;
a=ch - '0';
switch (a)
{
case 1:
{
    white hero1;
    break;
}
case 2:
{
    liltaha hero1;
    break;
}
case 3:
{
   
    break;
}

case 4:
{
   
    break;
}
case 5:
{
   
    break;
}

}
}