#ifndef WHITE_H
#define WHITE_H
#include "heroes.h"



class menuhandler;
class white: public heroes
{
    menuhandler *handler;
    public:
    void skill1(int,int);
    void skill2(int);
    void specialskill(int);
    white(menuhandler* m_handler);
};
#endif