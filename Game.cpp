/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */


//#include "Player.h"
#include "Game.h"
//#include "Score.h"

using namespace std;

    string Game::questions(Player &play)
{ 
        string ans;
        string c;
        int i;
        

        
            
        for(int i=1;i<=10;i++) {
//            i++;
            system("clear");
            int q = i;
            switch(q)
		{
		case 1:
		cout<<"What is the National Game of England  ?"<<endl;
		cout<<"\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball"<<endl;
                cin>>ans;
		if (ans =="C")
			{cout<<"\n\nCorrect!!!"<<endl;
                         play.newscore(1000*i);
                         
//                         cout<<play.m_name<<endl;
//                         cout<<"score ";
//                         cout<<play.m_score<<endl;
//                         cout<<play.m_score<<endl;
                        // cout<<play<<endl;
    //                    play.affiche();
//                        cout<<"press c to continue"<<endl;
//                        cin>>c;
//                        return c;
			 break;
                }
		else
		       {cout <<"\n\nWrong!!! The correct answer is C.Cricket"<<endl;
//                        myscore.display();
//                        cout<<"press v to continue"<<endl;
//                        cin>>c;
                        c="v";
                        return c;
//                       game = false;
                        
		       break; }
                
                case 2:
		cout<<"What is the National Game of England 2 ?"<<endl;
		cout<<"\n\nA.Football\t\tB.Basketball\n\nC.Cricket\t\tD.Baseball"<<endl;
                cin>>ans;
		if (ans =="C")
			{cout<<"\n\nCorrect!!!"<<endl;
//                        play.setScore(1000*i);
                         play.newscore(1000*i);
//                        cout<<"press c to continue"<<endl;
//                        string c;
//                        cin>>c;
                        c = "v";
                        return c;
			 break;
                }
		else
		       {cout<<"\n\nWrong!!! The correct answer is C.Cricket"<<endl;
//		       cout<<"press c to continue"<<endl;
//                        string c;
//                        cin>>c;
                        c = "v";
                        return c;
		       break;}

        }
            }
//        return c;
                 
    }
    
    