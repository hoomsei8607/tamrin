#include "../headers/user.h"
#include "../headers/menuhandler.h"
#include <vector>

void user::set_name(string name)
{
    this->name=name;
}
void user::buildheroes(int choice,menuhandler* handler)
{
    
    
    heroes* newHero = nullptr;
switch (choice)
        {
            case 1: newHero = new white(handler);      break;
            case 2: newHero = new liltaha(handler);   break;
            case 3: newHero = new dani(handler);      break;
            case 4: newHero = new amin(handler);      break;
            case 5: newHero = new bigtaha(handler);   break;
        }
        if (newHero != nullptr)
                {
                    selectedHeroes.push_back(newHero);
                }
}
string user::getname()
{
    return name;
}

