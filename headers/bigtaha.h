#ifndef BIGTAHA_H
#define BIGTAHA_H
#include "heroes.h"

class menuhandler;
class bigtaha : public heroes
{
    menuhandler *handler;
    public:
    bigtaha(menuhandler* m_handler);
    void skill1(int,int);
    void skill2(int);
    void specialskill(int);
    void showskills();
    void damagemultiplier();
     int energyskill1=3;
    int energyskill2=4;
    int energyspecialskill=3;
};
#endif