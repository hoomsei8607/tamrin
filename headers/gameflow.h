#ifndef GAMEFLOW_H
#define GAMEFLOW_H
#include "menuhandler.h"

class gameflow
{
    menuhandler handler;
    int round=1;
    public:
    void rungame();
    int allcharachtersdead();
    void setenergy(int,int);
    int checkhealths();
};



#endif