
#include "../headers/littletaha.h"
#include "../headers/menuhandler.h"
#include <iostream>

 liltaha::liltaha(menuhandler* m_handler){
    set_health(500);
    set_roundforspecialattack(3);
    handler = m_handler;
 }
void liltaha::skill1(int choice,int user)  {
    if (handler == nullptr) {
        cout << "CRASH PREVENTION: 'handler' is a null pointer!\n";
        return;
        }
        cout<<"lil taha uses skill1 sharp blade\n";
        int low=handler->user1.selectedHeroes[0]->get_health();
        int lowestindex=0;
        if (user==1)
        {
        for (int i = 1; i < 3; i++)
        {
            if (handler->user1.selectedHeroes[i]->get_health()<low)
            {
                low=handler->user1.selectedHeroes[i]->get_health();
                lowestindex=i;
            }
        }
        handler->user1.selectedHeroes[lowestindex]->changehealth(+20);
        if(handler->user2.selectedHeroes[choice-1]->get_health()<=0)
    {
        cout<<"this opponent is dead";
        return;
    }
        handler->user2.selectedHeroes[choice-1]->changehealth(-30*multiplier);
    }
     if (user==2)
        {
            int low=handler->user2.selectedHeroes[0]->get_health();
        for (int i = 1; i < 3; i++)
        {
            if (handler->user2.selectedHeroes[i]->get_health()<low)
            {
                low=handler->user2.selectedHeroes[i]->get_health();
                lowestindex=i;
            }
        }
        handler->user2.selectedHeroes[lowestindex]->changehealth(+20);
        if(handler->user1.selectedHeroes[choice-1]->get_health()<=0)
    {
        cout<<"this opponent is dead";
        return;
    }
        handler->user1.selectedHeroes[choice-1]->changehealth(-30*multiplier);
    }
        
    }

void liltaha::skill2(int n)  {
        //TODO
    }

void liltaha::specialskill(int user)  {
    int lowestindex=0;
    if (user==1)
        {
            int low=handler->user1.selectedHeroes[0]->get_health();
        for (int i = 1; i < 3; i++)
        {
            if (handler->user1.selectedHeroes[i]->get_health()<low)
            {
                low=handler->user1.selectedHeroes[i]->get_health();
                lowestindex=i;
            }
        }
        handler->user1.selectedHeroes[lowestindex]->changehealth(+200);
    }
     if (user==2)
        {
            int low=handler->user2.selectedHeroes[0]->get_health();
        for (int i = 1; i < 3; i++)
        {
            if (handler->user2.selectedHeroes[i]->get_health()<low)
            {
                low=handler->user2.selectedHeroes[i]->get_health();
                lowestindex=i;
            }
        }
        handler->user2.selectedHeroes[lowestindex]->changehealth(+200);
    }
}