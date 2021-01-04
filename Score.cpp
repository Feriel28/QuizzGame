/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

#include "Score.h"
#include <fstream>
#include <iostream>
#include <string>
using namespace std;


   //constructeur
    Score::Score(int score) : m_score(score)
{

}
    
void Score::setScore(int s){
    int* ptr = &m_score;
    *ptr =  m_score + s;//just to try pointers
}

    void Score::display() const {
//        cout<<"\x1B[2J\x1B[0;0f"; // go down in terminal
        cout<<m_score<<endl;
    }
    
     int Score::getFileScore(){//A CONTINUER POUR EDITER LE FICHIER TXT
	fstream my_file;
	my_file.open("scores.txt",ios::in);
        int highscore;
        my_file>>highscore;
        return highscore; 
     }
     
     
    void Score::editScore(){//A CONTINUER POUR EDITER LE FICHIER TXT
	fstream my_file;
	my_file.open("scores.txt",ios::out);
        int highscore = getFileScore();
//        my_file>> highscore; 
	if (!my_file) {
		cout << "File not created!";
	}
	else {
            
		cout << "File created successfully!"<<endl; 
                if (highscore < m_score){
////        ofstream flux("scores.txt", std::ios::trunc);
                    my_file << m_score << endl;
		my_file.close(); 
	}
    }
    }
        
        
        
        
        
        
//    string const scoreFile("C:/Users/DELL/Desktop/QuizzGame/scores.txt"); 
//    fstream flux(scoreFile.c_str());
//    if(flux)    
//    {
//        int highscore;
////        flux >> highscore; 
//        if (highscore<m_score){
////        ofstream flux("scores.txt", std::ios::trunc);
//        flux << m_score << endl;
//        
//   //supprimer la valeur et mettre le sc à la place
////        }
////        flux<<"10000"<<endl;//test
//    }
//    else
//    {
//        cout << "ERROR : file can't be opened" << endl;
//    }
//    }
//    }
    
    
    void Score::highScore() const{
        
	fstream my_file;
	my_file.open("scores.txt",ios::in);
        int highscore;

    if(my_file)    
    {

//        flux << "High score" << endl;
//        flux << 42.1337 << endl;
//        int age(23);
//        flux << "J'ai " << age << " ans." << endl;
        int highscore;
        my_file >> highscore; 
        cout<<highscore<<endl;
    }
    else
    {
        cout << "ERROR : file can't be opened" << endl;
    }
    }
    
    
    void Score::resetScore(){
        fstream my_file;
	my_file.open("scores.txt",ios::out);
        my_file << 0;
        
        
    }