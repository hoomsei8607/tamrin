#ifndef HEROES_H
#define HEROES_H
#include <string>
using namespace std;

class heroes
{
    int health=0;
    string name;
    public:
    int roundforspecialattack;
    float multiplier=1;
    void changehealth(int);
    bool ischarachterdead();
    virtual void damagemultiplier();//TO DO
    void set_health(int);
    int get_health();
    void set_roundforspecialattack(int);
    virtual void skill1(int=0,int=0) ;
    virtual void skill2(int ,int) ;
    virtual void specialskill(int) ;
    virtual ~heroes(){};
    bool markedbigtaha=false;
    bool markeddani=false;
    int numberofmarks=0;
    void set_name(string);
    string get_name();
    virtual void showskills()=0;
    bool isspecialready();
    int maxhealth;
    

    
    
};
#endif