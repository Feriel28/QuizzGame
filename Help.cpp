/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Help.h"
#include "Menu.h"

 
using namespace std;


    void Help::display() 
{
        cout<<"\x1B[2J\x1B[0;0f"; // go down in the terminal
        cout.width(20);
        cout<<"Help"<<endl;
        string line ("__________________________________________________________");
        cout.width(40);
        cout<<line<<endl; 
        cout.width(30);
        cout<<"Welcome in the Quizz game"<<endl;
        cout.width(40);
        cout<<line<<endl; 
        cout<<"First, enter your name"<<endl;
        cout<<"You will then have a number of questions in many fields.  "<<endl;
        cout<<"Your general knowledge will be tested with quizz questions regarding science, technology,movies,sports, geography and many more"<<endl;
        cout<<"For each good answer, you will earn a cash prize !"<<endl;
        cout<<"But if you answer wrong, you automatically exit the game."<<endl;
        cout.width(40);
        cout<<line<<endl; 
        cout.width(20);
        cout<<"HAVE FUN !"<<endl;
        cout.width(40);
        cout<<line<<endl; 
        string res;
        while (res!="M"){
        cout<<"Press M to go back to menu"<<endl;
        cin >> res;
        }
            if (res=="M") {
                system("clear");
                Menu::display();
  }    
    }
