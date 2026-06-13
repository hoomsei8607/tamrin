#include "../headers/white.h"
#include "../headers/menuhandler.h"
#include <iostream>
#include <ctime>



white::white(menuhandler* m_handler)
{
    set_health(550);
    set_roundforspecialattack(4);
    handler = m_handler;
    set_name("dr.white");
    maxhealth=550;
}
void white::skill1(int choice,int user)
{
    
    if (handler == nullptr) {
        cout << "CRASH PREVENTION: 'handler' is a null pointer!\n";
        return;
    }
    cout<<"dr.white uses skill1 aspirine\n";
    srand(time(0));
    int ally=rand()%3;
    
    
    if (user==1)
    {
        while (handler->user1.selectedHeroes[ally]->get_health()<=0)
    {
       int ally=rand()%3; 
    }
    cout<<"dr.white healed ally number: "<<ally+1;
    int allyhealth=handler->user1.selectedHeroes[ally]->get_health();
    int diffrence=handler->user1.selectedHeroes[ally]->maxhealth-allyhealth;
        if (diffrence<=40)
        {
          handler->user1.selectedHeroes[ally]->changehealth(+diffrence);  
        }
        else{
        handler->user1.selectedHeroes[ally]->changehealth(+40);
        }
        if(handler->user2.selectedHeroes[choice-1]->get_health()<=0)
    {
        cout<<"this opponent is dead";
        return;
    }
    handler->user2.selectedHeroes[choice-1]->changehealth(-40*multiplier);
     handler->user1.energy-=3;
    }
    else if (user==2)
    {
        while (handler->user2.selectedHeroes[ally]->get_health()<=0)
    {
       int ally=rand()%3; 
    }
    cout<<"dr.white healed ally number: "<<ally+1;
     int allyhealth=handler->user2.selectedHeroes[ally]->get_health();
    int diffrence=handler->user2.selectedHeroes[ally]->maxhealth-allyhealth;
        if (diffrence<=40)
        {
          handler->user2.selectedHeroes[ally]->changehealth(+diffrence);  
        }
        else{
        handler->user1.selectedHeroes[ally]->changehealth(+40);
        }
        if(handler->user1.selectedHeroes[choice-1]->get_health()<=0)
    {
        cout<<"this opponent is dead";
        return;
    }
        handler->user1.selectedHeroes[choice-1]->changehealth(-40*multiplier);
         handler->user2.energy-=3;
        
    }
}
void white::skill2(int choice,int user)  {
    if(user==1)
    {
    handler->user1.selectedHeroes[choice-1]->damagemultiplier();
     handler->user1.energy-=4;
    }
    else if (user==2)
    {
        handler->user2.selectedHeroes[choice-1]->damagemultiplier();
         handler->user2.energy-=4;
    }
       
    }

void white::specialskill(int user)  {
    if (user==1)
    {
        for (int i = 0; i < 3; i++)
        {
            if(handler->user1.selectedHeroes[i]->ischarachterdead())
            {
                handler->user1.selectedHeroes[i]->set_health(200);
                 handler->user1.energy-=4;
                break;
            }
            if (i==3)
            {
                cout<<"no charachter is dead";
            }
            
        }
        set_roundforspecialattack(4);
    }
    if (user==2)
    {
        for (int i = 0; i < 3; i++)
        {
            if(handler->user2.selectedHeroes[i]->ischarachterdead())
            {
                handler->user2.selectedHeroes[i]->changehealth(200);
                 handler->user2.energy-=4;
                break;
            }
            if (i==3)
            {
                cout<<"no charachter is dead";
            }
            
        }
    }
}     

void white::showskills()
{
    cout<<R"(dr.white's skills:
    1_aspirin(40 damage to selected enemy , 40 heal to random ally)
    2_doping(one ally deals 20% more damage)
    3_special skill: amaliat otagh amal(bring back 1 dead ally and set health to 200)
    )";
}
void white::damagemultiplier()
{
    multiplier=1.2;
}