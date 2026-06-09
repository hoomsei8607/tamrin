#ifndef DANI_H
#define DANI_H
#include "heroes.h"


class menuhandler;
class dani : public heroes
{
    menuhandler *handler;
    public:
    dani(menuhandler* m_handler);
     void skill1(int);
    void skill2(int,int);
    void specialskill();
};
#endif