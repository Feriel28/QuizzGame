/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Menu.h"

 
using namespace std;


    void Menu::display() 
{
     string line ("__________________________________________________________");
     cout.width(60);
     cout<<line<<endl;
     cout.width(33);
     cout<<"WELCOME"<<endl;
     cout.width(30);
     cout<<"to"<<endl;
     cout.width(33);
     cout<<"THE GAME"<<endl;
     cout.width(60);
     cout<<line<<endl;
     cout.width(60);
     cout<<line<<endl;
     cout.width(45);
     cout<<"BECOME A MILLIONNAIRE!!!!!!!!!!"<<endl;
     cout.width(60);
     cout<<line<<endl;
     cout.width(60);
     cout<<line<<endl;
     string s ("> Press S to start the game");
     string v ("> Press V to view the highest score");
     string r ("> Press R to resest the score");
     string h ("> Press H for help");
     string q ("> Press Q to quit");
     cout.width(s.length()+5);
     cout<<s<<endl;
     cout.width(v.length()+5);
     cout<<v<<endl;
     cout.width(r.length()+5);
     cout<<r<<endl;
     cout.width(h.length()+5);
     cout<<h<<endl;     
     cout.width(q.length()+5);
     cout<<q<<endl;  
     cout.width(60);
     cout<<line<<endl;

}