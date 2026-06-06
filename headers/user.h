#pragma once 
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
    vector<heroes*> selectedHeroes;
    void buildheroes(int);
    
    void set_name(string);
};

