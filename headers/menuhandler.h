#ifndef MENUHANDLEr_H
#define MENUHANDLEr_H
#include <iostream>
#include "white.h"
#include "littletaha.h"
#include "amin.h"
#include "dani.h"
#include "bigtaha.h"
#include "heroes.h"
#include "user.h"
using namespace std;

class menuhandler{
    public:
    friend class white;
    user user1;
    user user2;
    void buildhero1();
    void buildhero2();
    void builduser1();
    void builduser2();
    void runall();
};
#endif