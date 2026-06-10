#include "../headers/heroes.h"
#include "../headers/heroes.h"
#include <iostream>

void heroes::changehealth(int change)
{
    if (!ischarachterdead())
    {
        health+=change;
    }
    
}

bool heroes::ischarachterdead()
{
    if (health<=0)
    {
        return true;
    }
    return false;
    
}

void heroes::damagemultiplier(int rounds, int mult)
{
    //To do
}

void heroes::set_health(int hp)
{
    health=hp;
}
int heroes::get_health()
{
    return health;
}
void heroes::set_roundforspecialattack(int round)
{
    roundforspecialattack=round;
}

void heroes::skill1(int n,int n1)
{
}
void heroes::skill2(int n,int n1)
{

}
void heroes::specialskill(int n)
{

}
void heroes::set_name(string name)
{
    this->name=name;
}
string heroes::get_name()
{
    return name;
}
void showskills()
{
}

bool heroes::isspecialready()
{
    if (roundforspecialattack==0)
    {
        return true;
    }
    return false;
}