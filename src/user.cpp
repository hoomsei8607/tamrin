#include "../headers/user.h"
#include <vector>

void user::set_name(string name)
{
    this->name=name;
}
void user::buildheroes(int choice)
{
    
    
    heroes* newHero = nullptr;
switch (choice)
        {
            case 1: newHero = new white();      break;
            case 2: newHero = new liltaha();   break;
            case 3: newHero = new dani();      break;
            case 4: newHero = new amin();      break;
            case 5: newHero = new bigtaha();   break;
        }
        if (newHero != nullptr)
                {
                    selectedHeroes.push_back(newHero);
                }
}

