/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
#include "Player.h"

using namespace std;




    //constructeur
    Player::Player(string name, int score) : m_name(name), score(score){
        
    }

    void Player::newscore(int s) {                
        score.setScore(s);
        score.editScore();
    }
    void Player::displayScore() const {
        score.display();

    }
    
    void Player::highScore (){
        score.highScore();
//        score.editScore(0);
    }
    
    
    void Player::displayName() const {
//        cout<<"\x1B[2J\x1B[0;0f"; // go down in terminal
        cout<<"Player's name :"<<endl;
        cout<<m_name<<endl;  
    }
    
    void Player::resetScore() {
        score.resetScore();
    }
    
    
    
    

