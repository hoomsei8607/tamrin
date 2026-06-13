#include "../headers/dani.h"
#include "../headers/menuhandler.h"
#include <iostream>

dani::dani(menuhandler* m_handler)
{
    set_health(600);
    set_roundforspecialattack(4);
    handler = m_handler;
    set_name("dani");
    maxhealth=600;
}
void dani::skill1(int choice , int user)  {
        if (user==1)
        {
            if (handler->user2.selectedHeroes[choice-1]->numberofmarks==0  )
            {
                for(auto *item : handler->user2.selectedHeroes)
                {
                    item->numberofmarks=0;
                }
            }
            
            if(handler->user2.selectedHeroes[choice-1]->get_health()<=0)
        {
            cout<<"this opponent is dead\n";
            return;
        }
        if (handler->user2.selectedHeroes[choice-1]->markeddani=true)
        {
            int markdamage=1;
            for(int i=0 ; i<handler->user2.selectedHeroes[choice-1]->numberofmarks ; i++)
            {
                markdamage*=1.6;
            }
            handler->user2.selectedHeroes[choice-1]->changehealth(-20*markdamage*multiplier);
            handler->user2.selectedHeroes[choice-1]->numberofmarks++;   
        }
        else{
            handler->user2.selectedHeroes[choice-1]->changehealth(-20*multiplier);
            handler->user2.selectedHeroes[choice-1]->markeddani=true;
            handler->user2.selectedHeroes[choice-1]->numberofmarks++;
             handler->user1.energy-=2;
        }
        }
        if (user==2)
        {
            if (handler->user1.selectedHeroes[choice-1]->numberofmarks==0  )
            {
                for(auto *item : handler->user1.selectedHeroes)
                {
                    item->numberofmarks=0;
                }
            }
            
            if(handler->user1.selectedHeroes[choice-1]->get_health()<=0)
        {
            cout<<"this opponent is dead\n";
            return;
        }
        if (handler->user1.selectedHeroes[choice-1]->markeddani=true)
        {
            int markdamage=1;
            for(int i=0 ; i<handler->user1.selectedHeroes[choice-1]->numberofmarks ; i++)
            {
                markdamage*=1.6;
            }
            handler->user1.selectedHeroes[choice-1]->changehealth(-20*markdamage*multiplier);
            handler->user1.selectedHeroes[choice-1]->numberofmarks++;   
        }
        else{
            handler->user1.selectedHeroes[choice-1]->changehealth(-20*multiplier);
            handler->user1.selectedHeroes[choice-1]->markeddani=true;
            handler->user1.selectedHeroes[choice-1]->numberofmarks++;
             handler->user1.energy-=2;
        }
        }
        
    }

void dani::skill2(int choice,int user)  {
        
            if (handler == nullptr) {
        cout << "CRASH PREVENTION: 'handler' is a null pointer!\n";
        return;
        }
        cout<<"dani uses skill1\n";
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
         handler->user1.energy-=4;
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
         handler->user2.energy-=4;
    }
   
}
void dani::specialskill()  {
        set_roundforspecialattack(4);
    }

void dani::showskills()
{
    cout<<R"(Dani's skills:
    1_ghofli(20 damage to one enemy but multiplies by 1.6 if attacked again)
    2_fil kosh(50 damage to selected enemy and the enemy with the most health)
    3_special skill: sangar khanevade(gives 250 shield to ally with least health for 2 turns)
    
    )";
}
void dani::damagemultiplier()
{
    multiplier=1.2;
}