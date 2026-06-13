
#include "../headers/littletaha.h"
#include "../headers/menuhandler.h"
#include <iostream>

 liltaha::liltaha(menuhandler* m_handler){
    set_health(500);
    set_roundforspecialattack(3);
    handler = m_handler;
    set_name("littletaha");
    maxhealth=500;
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
        cout<<"littletaha healed ally number: "<<lowestindex+1;
         int allyhealth=handler->user1.selectedHeroes[lowestindex]->get_health();
    int diffrence=handler->user1.selectedHeroes[lowestindex]->maxhealth-allyhealth;
        if (diffrence<=20)
        {
          handler->user1.selectedHeroes[lowestindex]->changehealth(+diffrence);  
        }
        else{
        handler->user1.selectedHeroes[lowestindex]->changehealth(+20);
        }

        if(handler->user2.selectedHeroes[choice-1]->get_health()<=0)
    {
        cout<<"this opponent is dead";
        return;
    }
        handler->user2.selectedHeroes[choice-1]->changehealth(-30*multiplier);
         handler->user1.energy-=2;
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
        cout<<"littletaha healed ally number: "<<lowestindex+1;
            int allyhealth=handler->user2.selectedHeroes[lowestindex]->get_health();
    int diffrence=handler->user2.selectedHeroes[lowestindex]->maxhealth-allyhealth;
        if (diffrence<=20)
        {
          handler->user2.selectedHeroes[lowestindex]->changehealth(+diffrence);  
        }
        else{
        handler->user2.selectedHeroes[lowestindex]->changehealth(+20);
        }
        if(handler->user2.selectedHeroes[choice-1]->get_health()<=0)
    {
        cout<<"this opponent is dead";
        return;
    }
        handler->user1.selectedHeroes[choice-1]->changehealth(-30*multiplier);
         handler->user2.energy-=2;
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
         handler->user1.energy-=4;
        
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
         handler->user2.energy-=4;
    }
    set_roundforspecialattack(3);
}
void liltaha::showskills()
{
    cout<<R"(little taha's skills:
    1_tigh tiz(30 damage to selected enemy ,20 heal to least health ally)
    2_serom khoon(40 heal for 1 ally for 2 turns)
    3_special skill: gharantine kamel(200 heal for least health ally)
    
    )";
}
void liltaha::damagemultiplier()
{
    multiplier=1.2;
}