#include "../headers/dani.h"
#include "../headers/menuhandler.h"
#include <iostream>

dani::dani(menuhandler* m_handler)
{
    set_health(600);
    set_roundforspecialattack(4);
    handler = m_handler;
}
void dani::skill1(int n)  {
        
    }

void dani::skill2(int choice,int user)  {
        
            if (handler == nullptr) {
        cout << "CRASH PREVENTION: 'handler' is a null pointer!\n";
        return;
        }
        cout<<"dani taha uses skill1\n";
        int high=handler->user2.selectedHeroes[0]->get_health();
        int highestindex=0;
        if (user==1)
        {
        for (int i = 1; i < 3; i++)
        {
            if (handler->user2.selectedHeroes[i]->get_health()>high)
            {
                high=handler->user2.selectedHeroes[i]->get_health();
                highestindex=i;
            }
        }
        
        handler->user2.selectedHeroes[highestindex]->changehealth(-50*multiplier);
        if(handler->user2.selectedHeroes[choice-1]->get_health()<=0)
    {
        cout<<"this opponent is dead\n";
        return;
    }
        handler->user2.selectedHeroes[choice-1]->changehealth(-50*multiplier);
    }
     if (user==2)
        {
            int high=handler->user1.selectedHeroes[0]->get_health();
        for (int i = 1; i < 3; i++)
        {
            if (handler->user1.selectedHeroes[i]->get_health()>high)
            {
                high=handler->user1.selectedHeroes[i]->get_health();
                highestindex=i;
            }
        }
        handler->user1.selectedHeroes[highestindex]->changehealth(-50*multiplier);
        if(handler->user1.selectedHeroes[choice-1]->get_health()<=0)
    {
        cout<<"this opponent is dead\n";
        return;
    }
        handler->user1.selectedHeroes[choice-1]->changehealth(-50*multiplier);
    }
   
}
void dani::specialskill()  {
        
    }