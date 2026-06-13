#ifndef WHITE_H
#define WHITE_H
#include "heroes.h"



class menuhandler;
class white: public heroes
{
    menuhandler *handler;
    public:
    void skill1(int,int);
    void skill2(int,int);
    void specialskill(int);
    white(menuhandler* m_handler);
    void showskills ()override;
    void damagemultiplier()override;
     int energyskill1=3;
    int energyskill2=4;
    int energyspecialskill=4;
};
#endif