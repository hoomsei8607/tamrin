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

