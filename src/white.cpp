#include "../headers/white.h"
#include "../headers/menuhandler.h"
#include <iostream>
#include <ctime>



white::white()
{
    set_health(550);
    set_roundforspecialattack(4);
}
void white::skill1(int choice,int user)
{
    cout<<"dr.white uses skill1 aspirine";
    srand(time(0));
    int ally=rand()%3;
    if (user==1)
    {
    handler->user2.selectedHeroes[choice-1]->changehealth(-40*multiplier);
    handler->user1.selectedHeroes[ally]->changehealth(+40);
    }
    else if (user==2)
    {
        handler->user1.selectedHeroes[choice-1]->changehealth(-40*multiplier);
        handler->user2.selectedHeroes[ally]->changehealth(+40);
        
    }
}
void white::skill2(int n)  {
        
    }

void white::specialskill(int user)  {
    if (user==1)
    {
        for (int i = 0; i < 3; i++)
        {
            if(handler->user1.selectedHeroes[i]->ischarachterdead())
            {
                handler->user1.selectedHeroes[i]->changehealth(200);
                break;
            }
            if (i==2)
            {
                cout<<"no charachter is dead";
            }
            
        }
    }
    if (user==2)
    {
        for (int i = 0; i < 3; i++)
        {
            if(handler->user2.selectedHeroes[i]->ischarachterdead())
            {
                handler->user2.selectedHeroes[i]->changehealth(200);
                break;
            }
            if (i==2)
            {
                cout<<"no charachter is dead";
            }
            
        }
    }
}     