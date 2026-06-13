#include "../headers/amin.h"
#include <iostream>
#include "../headers/menuhandler.h"
#include "../headers/amin.h"
#include <ctime>

amin::amin(menuhandler* m_handler)
{
    handler = m_handler;
    set_health(500);
    set_roundforspecialattack(3);
    set_name("amin");
    maxhealth=500;
}
void amin::skill1(int choice,int user)  
{
    cout<<"amin uses skill1 last bullet\n";
    
        
        if (user==1)
        {
            if(handler->user2.selectedHeroes[choice-1]->get_health()<=0)
    {
        cout<<"this opponent is dead\n";
        return;
    }
            if (handler->user2.selectedHeroes[choice-1]->get_health()<=55*multiplier*aminmult)
            {
                handler->user2.selectedHeroes[choice-1]->changehealth(-55*multiplier*aminmult);
            }
            else
            {
                handler->user2.selectedHeroes[choice-1]->changehealth(-55*multiplier*aminmult);
            }
            handler->user1.energy-=3;
        }
        if (user==2)
        {
            if(handler->user1.selectedHeroes[choice-1]->get_health()<=0)
    {
        cout<<"this opponent is dead\n";
        return;
    }
            if (handler->user1.selectedHeroes[choice-1]->get_health()<=55*multiplier*aminmult)
            {
                handler->user1.selectedHeroes[choice-1]->changehealth(-55*multiplier*aminmult);
                aminmult*=2;
            }
            else
            {
                handler->user1.selectedHeroes[choice-1]->changehealth(-55*multiplier*aminmult);
            }
            handler->user2.energy-=3;
        }
        
}

void amin::skill2(int choice,int user)  {
        cout<<"amin uses skill1\n";
        if (user==1)
        {
            if(handler->user1.selectedHeroes[choice-1]->get_health()<=0)
            {
            cout<<"this ally is dead\n";
            return;
            }
            if(handler->user1.selectedHeroes[choice-1]->get_health()<=25)
            {
                cout<<"this ally's health is too low";
                return;
            }
            if (handler->user1.selectedHeroes[choice-1]==this)
            {
                cout<<"you cant use this skill on amin ";
                return;
            }
            handler->user1.selectedHeroes[choice-1]->changehealth(-25);
            changehealth(+75); 
            handler->user1.energy-=3;
        }
        if (user==2)
        {
            if(handler->user2.selectedHeroes[choice-1]->get_health()<=0)
            {
            cout<<"this ally is dead\n";
            return;
            }
            if(handler->user2.selectedHeroes[choice-1]->get_health()<=25)
            {
                cout<<"this ally's health is too low";
                return;
            }
            if (handler->user2.selectedHeroes[choice-1]==this)
            {
                cout<<"you cant use this skill on amin ";
                return;
            }
            handler->user2.selectedHeroes[choice-1]->changehealth(-25);
            changehealth(+75); 
            handler->user2.energy-=3;
        }
        

    }

void amin::specialskill(int user)  {
        cout<<"amin uses the specialskill";
        srand(time(0));
        int enemy=rand()%3;
        if (user==1)
        {
        while (handler->user2.selectedHeroes[enemy]->get_health()<=0)
        {
            enemy=rand()%3; 
        }
        handler->user2.selectedHeroes[enemy]->changehealth(-250);
        for (int i = 0; i < 3; i++)
        {
            if (handler->user1.selectedHeroes[i]!=this&&handler->user1.selectedHeroes[i]->get_health()>0)
            {
                handler->user1.selectedHeroes[i]->changehealth(-30);
            }
        }
        handler->user1.energy-=4;
    }
      if (user==2)
        {
        while (handler->user2.selectedHeroes[enemy]->get_health()<=0)
        {
            enemy=rand()%3; 
        }
        handler->user1.selectedHeroes[enemy]->changehealth(-250);
        for (int i = 0; i < 3; i++)
        {
            if (handler->user2.selectedHeroes[i]!=this&&handler->user1.selectedHeroes[i]->get_health()>0)
            {
                handler->user2.selectedHeroes[i]->changehealth(-30);
            }
        }
         handler->user2.energy-=4;
        
    }
    set_roundforspecialattack(3);
}

void amin::showskills()
{
    cout<<R"(Amin's skills:
    1_akharin feshang(deals 55 damage to selected enemy)
    2_zarbe be khodi(25 damage to one ally to heal himself(75 heal))
    3_special skill : faryad na amni(250 damage to one random enemy and 30 damage to 2 allies)
    )";
}
void amin::damagemultiplier()
{
    multiplier=1.2;
}