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

}

void heroes::set_health(int hp)
{
    health=hp;
}
void heroes::set_roundforspecialattack(int round)
{
    roundforspecialattack=round;
}
