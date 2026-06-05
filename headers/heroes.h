#pragma once
#include <string>
using namespace std;

class heroes
{
    int health;
    int roundforspecialattack;
    int multiplier;
    public:
    void changehealth(int);
    bool ischarachterdead();
    void damagemultiplier(int,int);
    void set_health(int);
    void set_roundforspecialattack(int);

    
    
};