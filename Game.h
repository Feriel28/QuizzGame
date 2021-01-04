/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/* 
 * File:   Game.h
 * Author: Feriel
 *
 * Created on 13 décembre 2020, 12:39
 */

#ifndef GAME_H
#define GAME_H
#include "Score.h"
#include "Player.h"

class Game 
{
public :
    Game(){};
    std::string questions(Player &play);
   
//private : 
//    Player m_play;
    
    
};

#endif /* GAME_H */

