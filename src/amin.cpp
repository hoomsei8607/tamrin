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
            if (handler->user2.selectedHeroes[choice-1]->get_health()<=110*multiplier)
            {
                handler->user2.selectedHeroes[choice-1]->changehealth(-110*multiplier);
            }
            else
            {
                handler->user2.selectedHeroes[choice-1]->changehealth(-55*multiplier);
            }
        }
        if (user==2)
        {
            if(handler->user1.selectedHeroes[choice-1]->get_health()<=0)
    {
        cout<<"this opponent is dead\n";
        return;
    }
            if (handler->user1.selectedHeroes[choice-1]->get_health()<=110*multiplier)
            {
                handler->user1.selectedHeroes[choice-1]->changehealth(-110*multiplier);
            }
            else
            {
                handler->user1.selectedHeroes[choice-1]->changehealth(-55*multiplier);
            }
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
        }
        if (user==1)
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
           int enemy=rand()%3; 
        }
        handler->user2.selectedHeroes[enemy]->changehealth(-250);
        for (int i = 0; i < 3; i++)
        {
            if (handler->user1.selectedHeroes[i]!=this&&handler->user1.selectedHeroes[i]->get_health()>0)
            {
                handler->user1.selectedHeroes[i]->changehealth(-30);
            }
        }
    }
      if (user==2)
        {
        while (handler->user1.selectedHeroes[enemy]->get_health()<=0)
        {
           int enemy=rand()%3; 
        }
        handler->user1.selectedHeroes[enemy]->changehealth(-250);
        for (int i = 0; i < 3; i++)
        {
            if (handler->user2.selectedHeroes[i]!=this&&handler->user1.selectedHeroes[i]->get_health()>0)
            {
                handler->user2.selectedHeroes[i]->changehealth(-30);
            }
        }
        
    }
}