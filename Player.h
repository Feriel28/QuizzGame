/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Player.h
 * Author: Feriel
 *
 * Created on 13 décembre 2020, 12:41
 */

#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>
#include "Score.h"


class Player 
{
public :
    Player();
    Player(std::string name);
    Player(std::string name, int score);
    void displayName() const;
    void displayScore() const;
    void newscore(int);
//    void display() const;
    void highScore();
    int getScore();
    void setScore(int);
    void resetScore();
  
public :
    std::string m_name;

    Score score;
//    std::string x;
//    std::string y;
   
};

#endif /* PLAYER_H */

