#include "../headers/heroes.h"
#include "../headers/heroes.h"

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

void heroes::skill1()
{
}
void heroes::skill2()
{

}
void heroes::specialskill()
{

}
