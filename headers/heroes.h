#ifndef HEROES_H
#define HEROES_H
#include <string>
using namespace std;

class heroes
{
    int health;
    int roundforspecialattack;
    public:
    int multiplier=1;
    void changehealth(int);
    bool ischarachterdead();
    void damagemultiplier(int,int);//TO DO
    void set_health(int);
    int get_health();
    void set_roundforspecialattack(int);
    virtual void skill1() ;
    virtual void skill2() ;
    virtual void specialskill() ;
    virtual ~heroes(){};

    
    
};
#endif