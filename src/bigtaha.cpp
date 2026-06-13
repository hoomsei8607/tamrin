#include "../headers/bigtaha.h"
#include <iostream>
#include "../headers/menuhandler.h"
#include<ctime>

bigtaha::bigtaha(menuhandler* m_handler)
{
    set_health(500);
    set_roundforspecialattack(4);
    handler = m_handler;
    maxhealth=500;
    set_name("bigtaha");
}
void bigtaha::skill1(int choice,int user)  {
    cout<<"bigtaha uses skill1\n";
        if (user==1)
        {
            for (int i = 0; i < 3; i++)
            {
                if (handler->user2.selectedHeroes[i]->get_health()>0)
                {
                handler->user2.selectedHeroes[i]->changehealth(-30*multiplier);
                }
            }  
             handler->user1.energy-=3;         
        }
        if (user==2)
        {
            for (int i = 0; i < 3; i++)
            {
                if (handler->user1.selectedHeroes[i]->get_health()>0)
                {
                handler->user1.selectedHeroes[i]->changehealth(-30*multiplier);
                }
            } 
             handler->user2.energy-=4;
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
        handler->user2.selectedHeroes[enemy]->markedbigtaha=true;
         handler->user1.energy-=3;
    }
      if (user==2)
        {
        while (handler->user1.selectedHeroes[enemy]->get_health()<=0)
        {
           int enemy=rand()%3; 
        }
        handler->user1.selectedHeroes[enemy]->markedbigtaha=true;
         handler->user2.energy-=3;
    }
    set_roundforspecialattack(4);
}
 void bigtaha::showskills()
 {
    cout<<R"(Bigtaha's skills:
    1_Ragbar(30 damage to all enemies)
    2_x-ray(90 damage to 1 enemy and hide)
    3_special skill: entegham baradar(mark 1 enemy to damage next turn)
    )";
 }
 void bigtaha::damagemultiplier()
{
    multiplier=1.2;
}