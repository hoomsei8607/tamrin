#ifndef BIGTAHA_H
#define BIGTAHA_H
#include "heroes.h"

class menuhandler;
class bigtaha : public heroes
{
    menuhandler *handler;
    public:
    bigtaha(menuhandler* m_handler);
    void skill1(int);
    void skill2(int);
    void specialskill(int);
};
#endif