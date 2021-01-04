#include <bits/stdc++.h>
#include <iostream>
#include<string>
#include <cstdlib>
#include "Menu.h"
#include "Player.h"
#include "Help.h"
#include "Score.h"
#include "Game.h"
#include <stdlib.h> 
#include <Windows.h>
using namespace std;


void returnMenu(string res)
{
                while (res!="M"){
                    cout<<"Press M to go back to menu"<<endl;
                    cin >> res;
                                }
                    if (res=="M") {
                        system("clear");
                        Menu::display();
                                   }  
}
namespace choices {
    enum Choice
    {
        choice_invalide,
        choice1,
        choice2,
        choice3,
        choice4,
        choice5,
        choice6,
    };
}

choices::Choice resolveChoice(string input){
    if ((input =="S") or (input =="s")) return choices::Choice::choice1;
    if ((input =="V") or (input =="v"))  return choices::Choice::choice2;
    if ((input =="R") or (input =="r"))  return choices::Choice::choice3;
    if ((input =="H") or (input =="h"))  return choices::Choice::choice4;
    if ((input =="Q") or (input =="q")) return choices::Choice::choice5;
    if ((input =="M") or (input =="m")) return choices::Choice::choice6;
    return choices::Choice::choice_invalide;
}


int main(int argc, char** argv) {
  string res = "";
  int sc;
  LOOP : 
  Menu::display();
  
//            cout<<"\n start game  "<<endl;
            cout<<"\n Welcome in the game, please enter your name :";
            string name;
            cin >> name;
            cout<<"Please select from menu :";
            Player player(name,0);
            Game game;

    while (res != "Q") {  
    cin >> res;
    system("clear");// a faire aussi pour linux
    switch (resolveChoice(res)) {
       
        default :
        {
            goto LOOP;
            break;
        }
        
        case choices::Choice::choice1 :
        {
            //cout<<"\x1B[2J\x1B[0;0f";   

            res = game.questions(player);
           
//            break;  //commenter pour passer a view score
        }
        
        case choices::Choice::choice2 :
//            cout<<"view high score"<<endl;

            player.highScore();
            returnMenu(res);
            break;

        case choices::Choice::choice3 :
//            cout<<"reset score"<<endl;
            player.resetScore();
            cout<<"you have reset the score to 0"<<endl;
            returnMenu(res);
            break;
    
        case choices::Choice::choice4 :
            Help::display();
            break;
            
        case choices::Choice::choice5 :
            cout<<"You are exiting the game"<<endl;
            cout<<"Thanks for playing "<< player.m_name <<endl;
            break;
    
    }
  }    
  return 0;
}

