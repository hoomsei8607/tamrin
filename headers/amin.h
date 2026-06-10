#ifndef AMIN_H
#define AMIN_H
#include "heroes.h"

class menuhandler;
class amin : public heroes
{
    menuhandler *handler;
    public:
    amin(menuhandler* m_handler);
    void skill1(int,int)  ;
    void skill2(int,int);
    void specialskill(int);
    void showskills();

};
#endif