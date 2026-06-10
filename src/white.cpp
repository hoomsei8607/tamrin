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
    while (handler->user1.selectedHeroes[ally]->get_health()<=0)
    {
       int ally=rand()%3; 
    }
    
    
    if (user==1)
    {
        handler->user1.selectedHeroes[ally]->changehealth(+40);
        if(handler->user2.selectedHeroes[choice-1]->get_health()<=0)
    {
        cout<<"this opponent is dead";
        return;
    }
    handler->user2.selectedHeroes[choice-1]->changehealth(-40*multiplier);
    }
    else if (user==2)
    {
        handler->user2.selectedHeroes[ally]->changehealth(+40);
        if(handler->user1.selectedHeroes[choice-1]->get_health()<=0)
    {
        cout<<"this opponent is dead";
        return;
    }
        handler->user1.selectedHeroes[choice-1]->changehealth(-40*multiplier);
        
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
                handler->user1.selectedHeroes[i]->set_health(200);
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

void white::showskills()
{
    cout<<R"(dr.white's skills:
    1_aspirin(40 damage to selected enemy , 40 heal to random ally)
    2_doping(one ally deals 20% more damage)
    3_special skill: amaliat otagh amal(bring back 1 dead ally and set health to 200)
    )";
}