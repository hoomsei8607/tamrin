#ifndef DANI_H
#define DANI_H
#include "heroes.h"


class menuhandler;
class dani : public heroes
{
    menuhandler *handler;
    public:
    dani(menuhandler* m_handler);
     void skill1(int,int);
    void skill2(int,int);
    void specialskill();
    void showskills();
    void damagemultiplier();
     int energyskill1=2;
    int energyskill2=4;
    int energyspecialskill=4;
};
#endif