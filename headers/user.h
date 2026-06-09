#ifndef USER_h
#define USER_h
#include <string>
#include <vector>
#include <iostream>
#include "white.h"
#include "littletaha.h"
#include "amin.h"
#include "dani.h"
#include "bigtaha.h"
#include "heroes.h"
using namespace std;

class user
{
    string name;
    public:
    friend class white;
    vector<heroes*> selectedHeroes;
    void buildheroes(int,menuhandler* handler);
    
    void set_name(string);
};

#endif