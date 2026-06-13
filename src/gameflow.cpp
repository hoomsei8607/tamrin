#include "../headers/gameflow.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

void gameflow::rungame()
{
    int roundcounter=0;
    handler.runall();
    srand(time(0));
    int turnuser = rand() % 2 + 1;
   
    int i;
    if (turnuser == 1)
    {
        i = 0;
    }
    else if (turnuser == 2)
    {
        i = 1;
    }
    for(round=2 ; round<32 ; round++)
    {
        if(round%2==0)
        {
            
            cout<<"\nRound "<<round/2<<endl;
            setenergy(round/2,turnuser);
            for(auto *item: handler.user1.selectedHeroes)
            {
                item->roundforspecialattack--;
                if (item->markedbigtaha)
                {
                    if (item->get_health()>360)
                    {
                        item->changehealth(-200);
                    }
                    else 
                    {
                        item->changehealth(-360);
                    }
                } 
            }
            for(auto *item: handler.user2.selectedHeroes)
            {
                item->roundforspecialattack--;
                if (item->markedbigtaha)
                {
                    if (item->get_health()>360)
                    {
                        item->changehealth(-200);
                    }
                    else 
                    {
                        item->changehealth(-360);
                    }
                } 
            }
           
            
        }
        if (i == 0 || i % 2 == 0)
        while(handler.user1.energy>0)
        {
        {
        {
            cout << "\n+----------------------------------------------------------------------------------+";
            cout << "\n| " << handler.user1.getname() << "'s turn:";
            cout << "\n+----------------------------------------------------------------------------------+";
            cout << "\n| YOUR TEAM STATUS :";
            cout << "\n| 1 : " << handler.user1.selectedHeroes[0]->get_name() << " \t| Health : " << handler.user1.selectedHeroes[0]->get_health();
            cout << "\n| 2 : " << handler.user1.selectedHeroes[1]->get_name() << " \t| Health : " << handler.user1.selectedHeroes[1]->get_health();
            cout << "\n| 3 : " << handler.user1.selectedHeroes[2]->get_name() << " \t| Health : " << handler.user1.selectedHeroes[2]->get_health();
            cout << "\n+----------------------------------------------------------------------------------+\n";

            cout << "  [!] Choose a hero to use skills\n";
            cout << "  | 1 : " << handler.user1.selectedHeroes[0]->get_name() << "\n";   
            cout << "  | 2 : " << handler.user1.selectedHeroes[1]->get_name() << "\n"; 
            cout << "  | 3 : " << handler.user1.selectedHeroes[2]->get_name() << "\n"; 
            cout << "  | [!] : input 0 to pass turn" << "\n"; 
            char ch;
            cout << "  +-> input : ";
            
            cin >> ch;
            int hero;
            
            
            hero = ch - '0';
            if (hero==0)
            {
                break;
            }
            
            while (hero < 0 || hero > 3)
            {
                cout << "  | [!] please enter a valid number (1 - 3) \n";
                cout << "  +-> input : ";
                cin >> ch;
                hero = ch - '0';
            }
            cout << "\n+----------------------------------------------------------------------------------+\n";
            handler.user1.selectedHeroes[hero - 1]->showskills();
            cout << "\n+----------------------------------------------------------------------------------+\n";
            cout << "  [!] Choose a skill (1-3) : \n";
            char ch2;
            cout << "  +-> input : ";
            cin >> ch2;
            int skill;
            skill = ch2 - '0';
            while (skill < 1 || skill > 3)
            {
                cout << "  | [!] please enter a valid number (1 - 3) \n";
                cout << "  +-> input : ";
                cin >> ch2;
                skill = ch2 - '0';
            }
            while (skill==3&&!handler.user1.selectedHeroes[hero - 1]->isspecialready())
                {
                    cout << "  | [!] special is not ready\n  +-> choose another skill : ";
                    cin >> ch2;
                    skill = ch2 - '0';
                    while (skill < 1 || skill > 2)
                    {
                        cout << "  | [!] please enter a valid number (1 - 2) \n";
                        cout << "  +-> input : ";
                        cin >> ch2;
                        skill = ch2 - '0';
                    }
                }
            cout << "\n+----------------------------------------------------------------------------------+\n";
            cout << "  [!] Choose a target (1-3) : ";
            char ch3;
            cin >> ch3;
            int enemy;
            enemy = ch3 - '0';
            while (enemy < 1 || enemy > 3)
            {
                cout << "  | [!] please enter a valid number (1 - 3) \n";
                cout << "  +-> input : ";
                cin >> ch3;
                enemy = ch3 - '0';
            }
            if (skill == 1)
            {
                handler.user1.selectedHeroes[hero - 1]->skill1(enemy, 1);
            }
            else if (skill == 2)
            {
                handler.user1.selectedHeroes[hero - 1]->skill2(enemy, 1);
            }
            else if (skill == 3)
            {
                handler.user1.selectedHeroes[hero - 1]->specialskill(1);
            }
        }
         if (allcharachtersdead()==1)
            {
                cout<<handler.user2.getname()<<" is the winner\n";
                return;
            }
             else if (allcharachtersdead()==2)
            {
                cout<<handler.user1.getname()<<" is the winner\n";
                return;
            }
    }
        }
        if (i % 2 == 1)
        while(handler.user2.energy>0)
        {
        ///////////////////////////////////////////////////
        {
            cout << "\n+----------------------------------------------------------------------------------+";
            cout << "\n| " << handler.user2.getname() << "'s turn:";
            cout << "\n+----------------------------------------------------------------------------------+";
            cout << "\n| YOUR TEAM STATUS :";
            cout << "\n| 1 : " << handler.user2.selectedHeroes[0]->get_name() << " \t| Health : " << handler.user2.selectedHeroes[0]->get_health();
            cout << "\n| 2 : " << handler.user2.selectedHeroes[1]->get_name() << " \t| Health : " << handler.user2.selectedHeroes[1]->get_health();
            cout << "\n| 3 : " << handler.user2.selectedHeroes[2]->get_name() << " \t| Health : " << handler.user2.selectedHeroes[2]->get_health();
            cout << "\n+----------------------------------------------------------------------------------+\n";

            cout << "  [!] Choose a hero to use skills\n";
            cout << "  | 1 : " << handler.user2.selectedHeroes[0]->get_name() << "\n";   
            cout << "  | 2 : " << handler.user2.selectedHeroes[1]->get_name() << "\n"; 
            cout << "  | 3 : " << handler.user2.selectedHeroes[2]->get_name() << "\n"; 
            cout << "  | [!] : input 0 to pass turn" << "\n"; 
            
           
            char ch;
            cout << "  +-> input : ";
            cin >> ch;
            int hero;
            hero = ch - '0';
            if (hero==0)
            {
                break;
            }
            
            
            while (hero < 0 || hero > 3)
            {
                cout << "  | [!] please enter a valid number (1 - 3) \n";
                cout << "  +-> input : ";
                cin >> ch;
                hero = ch - '0';
            }
            cout << "\n+----------------------------------------------------------------------------------+\n";
            handler.user2.selectedHeroes[hero - 1]->showskills();
            cout << "\n+----------------------------------------------------------------------------------+\n";
            cout << "  [!] Choose a skill (1-3) : \n";
            char ch2;
            cout << "  +-> input : ";
            cin >> ch2;
            int skill;
            skill = ch2 - '0';
            while (skill < 1 || skill > 3)
            {
                cout << "  | [!] please enter a valid number (1 - 3) \n";
                cout << "  +-> input : ";
                cin >> ch2;
                skill = ch2 - '0';
            }
            while (skill==3&&!handler.user2.selectedHeroes[hero - 1]->isspecialready())
                {
                    cout << "  | [!] special is not ready\n  +-> choose another skill : ";
                    cin >> ch2;
                    skill = ch2 - '0';
                    while (skill < 1 || skill > 2)
                    {
                        cout << "  | [!] please enter a valid number (1 - 2) \n";
                        cout << "  +-> input : ";
                        cin >> ch2;
                        skill = ch2 - '0';
                    }
                }
            cout << "\n+----------------------------------------------------------------------------------+\n";
            cout << "  [!] Choose a target (1-3) : ";
            char ch3;
            cin >> ch3;
            int enemy;
            enemy = ch3 - '0';
            while (enemy < 1 || enemy > 3)
            {
                cout << "  | [!] please enter a valid number (1 - 3) \n";
                cout << "  +-> input : ";
                cin >> ch3;
                enemy = ch3 - '0';
            }
            if (skill == 1)
            {
                handler.user2.selectedHeroes[hero - 1]->skill1(enemy, 2);
            }
            else if (skill == 2)
            {
                handler.user2.selectedHeroes[hero - 1]->skill2(enemy, 2);
            }
            else if (skill == 3)
            {
                handler.user2.selectedHeroes[hero - 1]->specialskill(2);
            }
            if (allcharachtersdead()==1)
            {
                cout<<handler.user2.getname()<<" is the winner\n";
                return;
            }
             else if (allcharachtersdead()==2)
            {
                cout<<handler.user1.getname()<<" is the winner\n";
                return;
            }
        }
    }
        i++;
        
    }
    if (checkhealths()==1)
    {
        cout<<handler.user1.getname()<<" is the winner\n";
        return;
    }
    else if (checkhealths()==2)
    {
        cout<<handler.user2.getname()<<" is the winner\n";
        return;
    }
    else if (checkhealths()==0)
    {
        cout<<"game is tied";
        return;
    }
    
}

int gameflow::allcharachtersdead()
{
    int counter=0;
    for(auto *item: handler.user1.selectedHeroes)
    {
        if(item->ischarachterdead())
        {
            counter++;
        }
    }
    if (counter==3)
    {
        return 1;
    }
     for(auto *item: handler.user2.selectedHeroes)
    {
        if(item->ischarachterdead())
        {
            counter++;
        }
    }
    if (counter==3)
    {
        return 2;
    }   
    return 0;
}

void gameflow::setenergy(int round,int user)
{
    if(user==1)
    {
    switch (round)
    {
    case 1:
        handler.user1.energy=5;
        handler.user2.energy=8;
        break;
    case 2:
        handler.user1.energy=8;
        handler.user2.energy=9;
        break;
    case 3:
        handler.user1.energy=9;
        handler.user2.energy=10;
        break;
    case 4:
        handler.user1.energy=10;
        handler.user2.energy=10;
        break;
    default:
        handler.user1.energy=10;
        handler.user2.energy=10;
        break;
    }
}
    else if(user==2)
        {
        switch (round)
        {
        case 1:
            handler.user2.energy=5;
            handler.user1.energy=8;
            break;
        case 2:
            handler.user2.energy=8;
            handler.user1.energy=9;
            break;
        case 3:
            handler.user2.energy=9;
            handler.user1.energy=10;
            break;
        case 4:
            handler.user2.energy=10;
            handler.user1.energy=10;
            break;
        default:
            handler.user2.energy=10;
            handler.user1.energy=10;
            break;
        }
    }
}

int gameflow::checkhealths()
{
    int healthsum1=0;
    int healthsum2=0;
      for(auto *item: handler.user1.selectedHeroes)
      {
        healthsum1+=item->get_health();
      }
      for(auto *item: handler.user2.selectedHeroes)
      {
        healthsum2+=item->get_health();
      }
      if (healthsum1>healthsum2)
      {
        return 1;
      }
      else if (healthsum1<healthsum2)
      {
        return 2;
      }
      if (healthsum1==healthsum2)
      {
        return 0;
      }
      return 200;
      
      
}