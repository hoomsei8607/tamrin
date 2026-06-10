#ifndef LILTAHA_H
#define LILTAHA_H
#include "heroes.h"

class menuhandler;
class liltaha :public heroes
{
    public:
    liltaha(menuhandler* m_handler);
    menuhandler *handler;
    void skill1(int,int);
    void skill2(int);
    void specialskill(int);
    void showskills();
};
#endif