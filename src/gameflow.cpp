#include "../headers/gameflow.h"

void gameflow::rungame()
{
    handler.runall();
    srand(time(0));
    int turnuser =rand()%2+1;
   
    int i;
    if (turnuser==1)
    {
        i=0;
    }
    else if (turnuser==2)
    {
        i=1;
    }
    while (true)
    {
        if (i==0||i%2==0)
        // while(handler.user1.energy>0)
        {
        {
            cout<<"\n------------------------------------------------------------------------------------\n";
            cout<<handler.user1.getname()<<"'s turn:"<<endl;
            cout<<"your team : ";
            cout<<"1 : "<<handler.user1.selectedHeroes[0]->get_name()<<"'s health : "<<handler.user1.selectedHeroes[0]->get_health()<<endl;
            cout<<"2 : "<<handler.user1.selectedHeroes[1]->get_name()<<"'s health : "<<handler.user1.selectedHeroes[1]->get_health()<<endl;
            cout<<"3 : "<<handler.user1.selectedHeroes[2]->get_name()<<"'s health : "<<handler.user1.selectedHeroes[2]->get_health()<<endl;
            cout<<"\n------------------------------------------------------------------------------------\n";

            
        cout<< "choose a hero to use skills\n";
        cout<<"1 : "<<handler.user1.selectedHeroes[0]->get_name()<<endl;   
        cout<<"2 : "<<handler.user1.selectedHeroes[1]->get_name()<<endl; 
        cout<<"3 : "<<handler.user1.selectedHeroes[2]->get_name()<<endl; 
        char ch;
            cout<<"input : ";
            
            cin>>ch;
            int hero;
        hero=ch - '0';
        while (hero<1||hero>3)
        {
            cout<<"please enter a valid number (1 - 5) \n";
            cin>>ch;
        }
        cout<<"\n------------------------------------------------------------------------------------\n";
        handler.user1.selectedHeroes[hero-1]->showskills();
    cout<<"choose a skill : \n";
    char ch2;
       cin>>ch2;
            int skill;
        skill=ch2 - '0';
        while (skill<1||skill>3)
        {
            cout<<"please enter a valid number (1 - 3) \n";
            cin>>ch2;
        }
    cout<<"\n------------------------------------------------------------------------------------\n";
    cout<<"choose a target : (1-3)";
     char ch3;
       cin>>ch3;
            int enemy;
        enemy=ch3 - '0';
        while (enemy<1||enemy>3)
        {
            cout<<"please enter a valid number (1 - 3) \n";
            cin>>ch3;
        }
        if (skill==1)
        {
            handler.user1.selectedHeroes[hero-1]->skill1(enemy,1);
        }
        else if (skill==2)
        {
            handler.user1.selectedHeroes[hero-1]->skill2(enemy,1);
        }
        else if (skill==3)
        {
            while (!handler.user1.selectedHeroes[hero-1]->isspecialready())
            {
               cout<<"special is not ready\n choose another skill :";
                 cin>>ch2;
            skill=ch2 - '0';
            while (skill<1||skill>3)
            {
            cout<<"please enter a valid number (1 - 3) \n";
            cin>>ch2;
            }
            }
            handler.user1.selectedHeroes[hero-1]->specialskill(1);
        }
        }
    }
        if (i%2==1)
        ///////////////////////////////////////////////////
        {
            cout<<"\n------------------------------------------------------------------------------------\n";
            cout<<handler.user2.getname()<<"'s turn:"<<endl;
            cout<<"your team's health \n : ";
            cout<<"1 : "<<handler.user2.selectedHeroes[0]->get_name()<<"'s health : "<<handler.user2.selectedHeroes[0]->get_health()<<endl;
            cout<<"2 : "<<handler.user2.selectedHeroes[1]->get_name()<<"'s health : "<<handler.user2.selectedHeroes[1]->get_health()<<endl;
            cout<<"3 : "<<handler.user2.selectedHeroes[2]->get_name()<<"'s health : "<<handler.user2.selectedHeroes[2]->get_health()<<endl;
            cout<<"\n------------------------------------------------------------------------------------\n";

        cout<< "choose a hero to use skills\n";
        cout<<"1 : "<<handler.user2.selectedHeroes[0]->get_name()<<endl;   
        cout<<"2 : "<<handler.user2.selectedHeroes[1]->get_name()<<endl; 
        cout<<"3 : "<<handler.user2.selectedHeroes[2]->get_name()<<endl; 
       
        char ch;
            cout<<"input : ";
            cin>>ch;
            int hero;
        hero=ch - '0';
        while (hero<1||hero>3)
        {
            cout<<"please enter a valid number (1 - 3) \n";
            cin>>ch;
        }
        cout<<"\n------------------------------------------------------------------------------------\n";
         handler.user2.selectedHeroes[hero-1]->showskills();
    cout<<"choose a skill : \n";
    char ch2;
       cin>>ch2;
            int skill;
        skill=ch2 - '0';
        while (skill<1||skill>3)
        {
            cout<<"please enter a valid number (1 - 3) \n";
            cin>>ch2;
        }
   cout<<"\n------------------------------------------------------------------------------------\n";
    cout<<"choose a target : (1-3)";
        char ch3;
       cin>>ch3;
            int enemy;
        enemy=ch3 - '0';
        while (enemy<1||enemy>3)
        {
            cout<<"please enter a valid number (1 - 3) \n";
            cin>>ch3;
        }
        if (skill==1)
        {
            handler.user2.selectedHeroes[hero-1]->skill1(enemy,2);
        }
        else if (skill==2)
        {
            handler.user2.selectedHeroes[hero-1]->skill2(enemy,2);
        }
        else if (skill==3)
        {
            while (!handler.user2.selectedHeroes[hero-1]->isspecialready())
            {
               cout<<"special is not ready\n choose another skill :";
                cin>>ch2;
            skill=ch2 - '0';
            while (skill<1||skill>3)
            {
            cout<<"please enter a valid number (1 - 5) \n";
            cin>>ch2;
            } 
            }
            handler.user2.selectedHeroes[hero-1]->specialskill(2);
        }
        
        }
        i++;
        round++;
    }
     
     
    
}
    
    
    
 
