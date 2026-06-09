#include "../headers/bigtaha.h"
#include <iostream>
#include "../headers/menuhandler.h"
#include<ctime>

bigtaha::bigtaha(menuhandler* m_handler)
{
    set_health(500);
    set_roundforspecialattack(4);
    handler = m_handler;
}
void bigtaha::skill1(int user)  {
    cout<<"bigtaha uses skill1\n";
        if (user==1)
        {
            for (int i = 0; i < 3; i++)
            {
                if (handler->user2.selectedHeroes[i]->get_health()>0)
                {
                handler->user2.selectedHeroes[i]->changehealth(-30);
                }
            }           
        }
        if (user==2)
        {
            for (int i = 0; i < 3; i++)
            {
                if (handler->user1.selectedHeroes[i]->get_health()>0)
                {
                handler->user1.selectedHeroes[i]->changehealth(-30);
                }
            } 
        } 
}

void bigtaha::skill2(int n)  {
        
    }

void bigtaha::specialskill(int user)  {
        cout<<"bigtaha uses specialattack\n";
        srand(time(0));
        int enemy=rand()%3;
        if (user==1)
        {
        while (handler->user2.selectedHeroes[enemy]->get_health()<=0)
        {
           int enemy=rand()%3; 
        }
        handler->user2.selectedHeroes[enemy]->marked=true;
    }
      if (user==2)
        {
        while (handler->user1.selectedHeroes[enemy]->get_health()<=0)
        {
           int enemy=rand()%3; 
        }
        handler->user1.selectedHeroes[enemy]->marked=true;
    }
}