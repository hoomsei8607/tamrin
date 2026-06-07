
#include "../headers/littletaha.h"
#include "../headers/menuhandler.h"
#include <iostream>

 liltaha::liltaha(){
    set_health(500);
    set_roundforspecialattack(3);
 }
void liltaha::skill1(int choice,int user)  {
        cout<<"lil taha uses skill1 sharp blade";
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
        handler->user1.selectedHeroes[choice-1]->changehealth(-30);
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
        handler->user2.selectedHeroes[choice-1]->changehealth(-30);
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